#include <stdio.h>
#include <stdlib.h>

int areTheyEqual(int a, int b);

int main()
{
    int x;
    int y;

    printf("Give me 2 numbers, please.\n");
    scanf("%d", &y);
    scanf("%d", &x);

    if(areTheyEqual(x, y)) {
        printf("They're equal.");
    }else{
        printf("Not equal.");
    }

}

int areTheyEqual(int a, int b)
{
    if(a == b) {
        return 1;
    }else{
        return 0;
    }
}