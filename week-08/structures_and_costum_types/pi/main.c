#include <stdio.h>
#include <stdlib.h>
#define PI 3.14

float circle_area(int x);

int main()
{
    printf("%0.2lf", circle_area(5));
    return 0;
}
float circle_area(int x)
{
    return (float) (x * x * PI);
}