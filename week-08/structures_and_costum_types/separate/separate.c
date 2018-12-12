#include "separate.h"
#define PI 3.14

float circle_area(int radius)
{
    return (float) (radius * radius * PI);
}

float circumference(int radius)
{
    return (float) (radius * 2 * PI);
}