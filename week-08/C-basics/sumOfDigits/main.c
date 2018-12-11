#include <stdio.h>
#include <stdlib.h>

int sumOfDigits(int a);

int main()
{
    int x;
    int y;

    printf("Give me 2 numbers, 100-999.\n");
    scanf("%d", &x);
    scanf("%d", &y);

    if(sumOfDigits(x) == sumOfDigits(y)){
        printf("Coool");
    }else{
        printf("No-no.");
    }
    return 0;
}

int sumOfDigits(int a)
{
    int sum1 = 0;
    while (a != 0) {
        sum1 = sum1 + a % 10;
        a = a / 10;
    }
    return sum1;
}
