#include<stdio.h>

int main()
{
    int a = 22;
    int b = 13;

    int c = a + b;
    int d = a - b;
    int e = a * b;
    int f = a % b;
    float g = (float)a / b;

    printf("%d\n", c);
    printf("%d\n", d);
    printf("%d\n", e);
    printf("%.2f\n", g);
    printf("%d\n", f);

    return 0;
}
