#include <stdio.h>
#include <string.h>

typedef struct house {
    char *address;
    int price;
    int room;
    int area;
    int market_price;
}house_t;

char worth_to_buy(house_t *x);
int house_array(const int array[], int length);
/*
Create a function that takes an array of houses (and it's length), and counts the
houses that are worth to buy.
*/

int main()
{
    house_t House1;
    House1.address = "street_1";
    House1.area = 100;
    House1.price = 4;
    House1.market_price = 400 * House1.area;

    house_t House2;
    House2.address = "street_2";
    House2.area = 2;
    House2.price = 100000000;
    House2.market_price = 400 * House2.area;

    house_t my_array[] = {House1, House2};

    int xxx = sizeof(my_array)/ sizeof(my_array[0]);  //tömb méret
    house_array(my_array, xxx);


    return 0;
}

char worth_to_buy(house_t *x)
{
    if(x->market_price > x->price){
        printf("Worth it.\n");
        return 1;
    }else{
        printf("Doesn't worth it.\n");
        return 0;
    }
}

int house_array(const int array[], int length)
{
    int count_worth = 0;

    for (int i = 0; i < length; ++i) {
        if(worth_to_buy(&array[i]) == 1){
            count_worth++;
        }
    }
    printf("%d", count_worth);
    return count_worth;
}
