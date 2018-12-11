#include <stdio.h>
#include <stdlib.h>

int evenOrOdd(int x);

int main()
{
    int a;
    printf("Give me a number.\n");
    scanf("%d", &a);

    if(evenOrOdd(a)) {
        printf("It's even.");
    }else{
        printf("It's odd.");
    }

    return 0;
}

int evenOrOdd(int x)
{
    if(x % 2 == 0) {
        return 1;
    }else{
        return 0;
    }
}
