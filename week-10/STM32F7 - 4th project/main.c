#include "stm32f7xx_hal.h"
#include "stm32746g_discovery.h"
#include <string.h>

static void SystemClock_Config(void);
static void Error_Handler(void);
static void MPU_Config(void);
static void CPU_CACHE_Enable(void);


#define UART_PUTCHAR int __io_putchar(int ch)

UART_HandleTypeDef uart_handle;
GPIO_InitTypeDef led;
GPIO_InitTypeDef led2;
GPIO_InitTypeDef led3;

TIM_HandleTypeDef tim_handle;
TIM_HandleTypeDef tim_handle1;
TIM_HandleTypeDef tim_handle2;

/*
GPIO_InitTypeDef led2;
TIM_HandleTypeDef tim_handle2;
TIM_OC_InitTypeDef tim_oc; */


int main(void) {

	/* Configure the MPU attributes as Write Through */
	MPU_Config();

	/* Enable the CPU Cache */
	CPU_CACHE_Enable();

	HAL_Init();

	/* Configure the System clock to have a frequency of 216 MHz */
	SystemClock_Config();

    __HAL_RCC_USART1_CLK_ENABLE();
    uart_handle.Instance = USART1;
    uart_handle.Init.BaudRate = 115200;
    uart_handle.Init.WordLength = UART_WORDLENGTH_8B;
    uart_handle.Init.StopBits = UART_STOPBITS_1;
    uart_handle.Init.Parity = UART_PARITY_NONE;
    uart_handle.Init.HwFlowCtl = UART_HWCONTROL_NONE;
    uart_handle.Init.Mode = UART_MODE_TX_RX;

    BSP_COM_Init(COM1, &uart_handle);

    __HAL_RCC_GPIOG_CLK_ENABLE();
    led.Pin = GPIO_PIN_6;
    led.Mode = GPIO_MODE_OUTPUT_PP;
    led.Pull = GPIO_PULLDOWN;
    led.Speed = GPIO_SPEED_HIGH;
    HAL_GPIO_Init(GPIOG, &led);

    __HAL_RCC_GPIOB_CLK_ENABLE();
	led2.Pin = GPIO_PIN_4;
	led2.Mode = GPIO_MODE_OUTPUT_PP;
	led2.Pull = GPIO_PULLDOWN;
	led2.Speed = GPIO_SPEED_HIGH;
	HAL_GPIO_Init(GPIOB, &led2);

	__HAL_RCC_GPIOI_CLK_ENABLE();
	led3.Pin = GPIO_PIN_0;
	led3.Mode = GPIO_MODE_OUTPUT_PP;
	led3.Pull = GPIO_PULLDOWN;
	led3.Speed = GPIO_SPEED_HIGH;
	HAL_GPIO_Init(GPIOI, &led3);

    __HAL_RCC_TIM2_CLK_ENABLE();
    tim_handle.Instance               = TIM2;
    tim_handle.Init.Period            = 60000;
    tim_handle.Init.Prescaler         = 10800;
    tim_handle.Init.ClockDivision     = TIM_CLOCKDIVISION_DIV1;
    tim_handle.Init.CounterMode       = TIM_COUNTERMODE_UP;
    HAL_TIM_Base_Init(&tim_handle);            //Configure the timer

    __HAL_RCC_TIM3_CLK_ENABLE();
	tim_handle1.Instance = TIM3;
	tim_handle1.Init.Period = 60000;
	tim_handle1.Init.Prescaler = 10800;
	tim_handle1.Init.ClockDivision = TIM_CLOCKDIVISION_DIV1;
	tim_handle1.Init.CounterMode = TIM_COUNTERMODE_UP;
	HAL_TIM_Base_Init(&tim_handle1);            //Configure the timer

	__HAL_RCC_TIM4_CLK_ENABLE();
	tim_handle2.Instance = TIM4;
	tim_handle2.Init.Period = 60000;
	tim_handle2.Init.Prescaler = 10800;
	tim_handle2.Init.ClockDivision = TIM_CLOCKDIVISION_DIV1;
	tim_handle2.Init.CounterMode = TIM_COUNTERMODE_UP;
	HAL_TIM_Base_Init(&tim_handle2);            //Configure the timer



    HAL_TIM_Base_Start(&tim_handle);
    HAL_TIM_Base_Start(&tim_handle1);
    HAL_TIM_Base_Start(&tim_handle2);


	while (1) {

		int cnt = TIM2->CNT;
		int cnt2 = TIM3->CNT;
		int cnt3 = TIM4->CNT;



		//int cnt2 = __HAL_TIM_GET_COUNTER(&tim_handle);
		//printf("szia %d\r\n", cnt);
		//HAL_Delay(500);

		if (cnt > 25000 && cnt < 60000) {

			HAL_GPIO_WritePin(GPIOG, GPIO_PIN_6, GPIO_PIN_SET);    ///////// JELZ�L�MPAK�D
		} else {
			HAL_GPIO_WritePin(GPIOG, GPIO_PIN_6, GPIO_PIN_RESET);  //PIRI


		}
		if (cnt3 > 15000 && cnt3 < 25000) {
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_4, GPIO_PIN_SET);
		} else if (cnt3 < 35000 && cnt3 > 25000){
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_4, GPIO_PIN_RESET); //s�rga
		} else if (cnt3 < 50000 && cnt3 > 45000){
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_4, GPIO_PIN_SET);
		} else if(cnt3 > 59999){
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_4, GPIO_PIN_RESET); //s�rga
		}


		if (cnt2 < 15000) {
			HAL_GPIO_WritePin(GPIOI, GPIO_PIN_0, GPIO_PIN_SET);
		} else {
			HAL_GPIO_WritePin(GPIOI, GPIO_PIN_0, GPIO_PIN_RESET); //z�ld
		}
		//HAL_GPIO_WritePin(GPIOG, GPIO_PIN_6, GPIO_PIN_SET);
		//HAL_GPIO_WritePin(GPIOG, GPIO_PIN_6, GPIO_PIN_RESET);


	}
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
