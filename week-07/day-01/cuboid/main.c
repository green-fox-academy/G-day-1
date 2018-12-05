#include <stdio.h>
#include <stdlib.h>

int main() {

    double a;
    double b;
    double c;

    printf("Hi, could you give me 3 numbers, please?\n");
    scanf("%lf", &a);
    scanf("%lf", &b);
    scanf("%lf", &c);

    double volume = a * b * c;
    double surface = 2 * (a * b + b * c + a * c);

    printf("%.0lf\n", volume);
    printf("%.0lf\n", surface);

    return 0;
}
