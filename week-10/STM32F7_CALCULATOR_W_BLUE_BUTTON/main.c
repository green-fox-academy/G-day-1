#include "stm32f7xx_hal.h"
#include "stm32746g_discovery.h"

typedef enum state {
    READ_FIRST_OPERAND,     // CALCULATOR EXERCISE WITH    ----   BLUE ---- BUTTTON !!!!!!!!!!!!!!!!!!!!!!
    READ_OPERATOR,
    READ_SECOND_OPERAND
} state_t;

state_t state = READ_FIRST_OPERAND;


int first = 0;
int second = 0;
int operator = 0;

int ignored_first_interrupt = 0;
int started = 0;


GPIO_InitTypeDef button;
TIM_HandleTypeDef tim_handle;
int first_press = 0;


static void SystemClock_Config(void);
static void Error_Handler(void);
static void MPU_Config(void);
static void CPU_CACHE_Enable(void);


#define PRINT_UART int __io_putchar(int ch)

static void Init_UART(void);

UART_HandleTypeDef uart_handle;


void button_init()
{
   __HAL_RCC_GPIOI_CLK_ENABLE();

   button.Pin = GPIO_PIN_11;
   button.Pull = GPIO_NOPULL;
   button.Speed = GPIO_SPEED_FAST;
   button.Mode = GPIO_MODE_IT_RISING;

   HAL_GPIO_Init(GPIOI, &button);

   HAL_NVIC_SetPriority(EXTI15_10_IRQn, 0x02, 0x00);
   HAL_NVIC_EnableIRQ(EXTI15_10_IRQn);
}

void timer_init()
{
    __HAL_RCC_TIM2_CLK_ENABLE();
   tim_handle.Instance               = TIM2;
   tim_handle.Init.Period            = 20000;
   tim_handle.Init.Prescaler         = 10800;
   tim_handle.Init.ClockDivision     = TIM_CLOCKDIVISION_DIV1;
   tim_handle.Init.CounterMode       = TIM_COUNTERMODE_UP;
   HAL_TIM_Base_Init(&tim_handle);

   HAL_NVIC_SetPriority(TIM2_IRQn, 0x01, 0x00);
   HAL_NVIC_EnableIRQ(TIM2_IRQn);
}


int main(void) {

	Init_UART();

	/* Configure the MPU attributes as Write Through */
	MPU_Config();

	/* Enable the CPU Cache */
	CPU_CACHE_Enable();

	HAL_Init();

	/* Configure the System clock to have a frequency of 216 MHz */
	SystemClock_Config();

	BSP_LED_Init(LED_GREEN);
	BSP_LED_On(LED_GREEN);

	BSP_COM_Init(COM1, &uart_handle);
	button_init();
	timer_init();



	printf("Hellloooooooooooooooooooo World\r\n");

	while (1) {



	}
}

void EXTI15_10_IRQHandler(){
	HAL_GPIO_EXTI_IRQHandler(button.Pin);

}

void HAL_GPIO_EXTI_Callback(uint16_t GPIO_Pin)  // gombnyomásra mit akarsz?
{

	TIM2->CNT = 0;
	    BSP_LED_Off(LED_GREEN);


	    if(state == READ_FIRST_OPERAND){
	        ++first;
	    }else if(state == READ_OPERATOR){
	        ++operator;
	    }else if(state == READ_SECOND_OPERAND){
	        ++second;
	    }

	    if(started == 0){
	        HAL_TIM_Base_Start_IT(&tim_handle);
	        started = 1;
	    }

}

void TIM2_IRQHandler(){
	  HAL_TIM_IRQHandler(&tim_handle);
}

void HAL_TIM_PeriodElapsedCallback(TIM_HandleTypeDef *htim)   //mit tegyen, ha a timer interrupt meghívódik?
{

	if(!ignored_first_interrupt){
	        ignored_first_interrupt = 1;
	        return;
	    }


	if(state == READ_FIRST_OPERAND){
		state = READ_OPERATOR;
	}else if(state == READ_OPERATOR){
		char c = (operator == 1 ? '+' : '-');
		state = READ_SECOND_OPERAND;
	}else{
		if(operator == 1){
			printf("%d + %d = %d\r\n", first, second, first + second);
		}else{
			printf("%d - %d = %d\r\n", first, second, first - second);
		}

		state = READ_FIRST_OPERAND;
		first = 0;
		operator = 0;
		second = 0;
		BSP_LED_On(LED_GREEN);
	}

	HAL_TIM_Base_Stop_IT(&tim_handle);
	started = 0;


}

static void Init_UART(void) {

	uart_handle.Instance         = USART1;
	uart_handle.Init.BaudRate    = 115200;
	uart_handle.Init.WordLength  = UART_WORDLENGTH_8B;
	uart_handle.Init.StopBits    = UART_STOPBITS_1;
	uart_handle.Init.Parity      = UART_PARITY_NONE;
	uart_handle.Init.HwFlowCtl   = UART_HWCONTROL_NONE;
	uart_handle.Init.Mode        = UART_MODE_TX_RX;

	BSP_COM_Init(COM1, &uart_handle);
}

PRINT_UART
{
	HAL_UART_Transmit(&uart_handle, (uint8_t*)&ch, 1, 0xFFFF);
	return ch;
}


static void SystemClock_Config(void) {
	RCC_ClkInitTypeDef RCC_ClkInitStruct;
	RCC_OscInitTypeDef RCC_OscInitStruct;

	/* Enable HSE Oscillator and activate PLL with HSE as source */
	RCC_OscInitStruct.OscillatorType = RCC_OSCILLATORTYPE_HSE;
	RCC_OscInitStruct.HSEState = RCC_HSE_ON;
	RCC_OscInitStruct.HSIState = RCC_HSI_OFF;
	RCC_OscInitStruct.PLL.PLLState = RCC_PLL_ON;
	RCC_OscInitStruct.PLL.PLLSource = RCC_PLLSOURCE_HSE;
	RCC_OscInitStruct.PLL.PLLM = 25;
	RCC_OscInitStruct.PLL.PLLN = 432;
	RCC_OscInitStruct.PLL.PLLP = RCC_PLLP_DIV2;
	RCC_OscInitStruct.PLL.PLLQ = 9;
	if (HAL_RCC_OscConfig(&RCC_OscInitStruct) != HAL_OK) {
		Error_Handler();
	}

	/* activate the OverDrive to reach the 216 Mhz Frequency */
	if (HAL_PWREx_EnableOverDrive() != HAL_OK) {
		Error_Handler();
	}

	/* Select PLL as system clock source and configure the HCLK, PCLK1 and PCLK2
	 clocks dividers */
	RCC_ClkInitStruct.ClockType = (RCC_CLOCKTYPE_SYSCLK | RCC_CLOCKTYPE_HCLK
			| RCC_CLOCKTYPE_PCLK1 | RCC_CLOCKTYPE_PCLK2);
	RCC_ClkInitStruct.SYSCLKSource = RCC_SYSCLKSOURCE_PLLCLK;
	RCC_ClkInitStruct.AHBCLKDivider = RCC_SYSCLK_DIV1;
	RCC_ClkInitStruct.APB1CLKDivider = RCC_HCLK_DIV4;
	RCC_ClkInitStruct.APB2CLKDivider = RCC_HCLK_DIV2;
	if (HAL_RCC_ClockConfig(&RCC_ClkInitStruct, FLASH_LATENCY_7) != HAL_OK) {
		Error_Handler();
	}
}

/**
 * @brief  This function is executed in case of error occurrence.
 * @param  None
 * @retval None
 */
static void Error_Handler(void) {
	/* User may add here some code to deal with this error */
	while (1) {
	}
}

/**
 * @brief  Configure the MPU attributes as Write Through for SRAM1/2.
 * @note   The Base Address is 0x20010000 since this memory interface is the AXI.
 *         The Region Size is 256KB, it is related to SRAM1 and SRAM2  memory size.
 * @param  None
 * @retval None
 */
static void MPU_Config(void) {
	MPU_Region_InitTypeDef MPU_InitStruct;

	/* Disable the MPU */
	HAL_MPU_Disable();

	/* Configure the MPU attributes as WT for SRAM */
	MPU_InitStruct.Enable = MPU_REGION_ENABLE;
	MPU_InitStruct.BaseAddress = 0x20010000;
	MPU_InitStruct.Size = MPU_REGION_SIZE_256KB;
	MPU_InitStruct.AccessPermission = MPU_REGION_FULL_ACCESS;
	MPU_InitStruct.IsBufferable = MPU_ACCESS_NOT_BUFFERABLE;
	MPU_InitStruct.IsCacheable = MPU_ACCESS_CACHEABLE;
	MPU_InitStruct.IsShareable = MPU_ACCESS_SHAREABLE;
	MPU_InitStruct.Number = MPU_REGION_NUMBER0;
	MPU_InitStruct.TypeExtField = MPU_TEX_LEVEL0;
	MPU_InitStruct.SubRegionDisable = 0x00;
	MPU_InitStruct.DisableExec = MPU_INSTRUCTION_ACCESS_ENABLE;

	HAL_MPU_ConfigRegion(&MPU_InitStruct);

	/* Enable the MPU */
	HAL_MPU_Enable(MPU_PRIVILEGED_DEFAULT);
}

/**
 * @brief  CPU L1-Cache enable.
 * @param  None
 * @retval None
 */
static void CPU_CACHE_Enable(void) {
	/* Enable I-Cache */
	SCB_EnableICache();

	/* Enable D-Cache */
	SCB_EnableDCache();
}

#ifdef  USE_FULL_ASSERT

/**
 * @brief  Reports the name of the source file and the source line number
 *         where the assert_param error has occurred.
 * @param  file: pointer to the source file name
 * @param  line: assert_param error line source number
 * @retval None
 */
void assert_failed(uint8_t* file, uint32_t line)
{
	/* User can add his own implementation to report the file name and line number,
	 ex: printf("Wrong parameters value: file %s on line %d\r\n", file, line) */

	/* Infinite loop */
	while (1)
	{
	}
}
#endif

/**
 * @}
 */

/**
 * @}
 */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
