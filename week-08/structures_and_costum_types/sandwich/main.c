#include <stdio.h>
#include <string.h>

typedef struct {
    char name[20];
    float price;
    float weight;
} Sandwich;

float price_of_order(Sandwich szendo, int x);

int main()
{
    Sandwich szendo;
    strcpy(szendo.name, "Sajtos-sonkas");
    szendo.price = 12.5;
    szendo.weight = 20.2;

    printf("The sandwich costs %0.2lf POUNDS.", price_of_order(szendo, 10));

    return 0;
}

float price_of_order(Sandwich szendo, int x)
{
    return x * szendo.price;
}