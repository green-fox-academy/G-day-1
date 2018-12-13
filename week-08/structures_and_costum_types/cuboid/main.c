#include <stdio.h>
#include <string.h>

typedef struct rectangular_cuboid {
    double a;
    double b;
    double c;
}rectangular_cuboid_t;

double get_surface(rectangular_cuboid_t xyz);
double get_area(rectangular_cuboid_t xyz);

int main()
{
    rectangular_cuboid_t first_cuboid;
    first_cuboid.a = 12.2;
    first_cuboid.b = 13.6;
    first_cuboid.c = 17.1;

    printf("Surface: %0.2lf\n", get_surface(first_cuboid));
    printf("Area: %0.2lf", get_area(first_cuboid));

    return 0;
}

double get_surface(rectangular_cuboid_t xyz)
{
    return 2 * (xyz.a * xyz.b + xyz.a *xyz.c + xyz.b * xyz.c);
}

double get_area(rectangular_cuboid_t xyz)
{
    return xyz.a * xyz.b * xyz.c;
}
