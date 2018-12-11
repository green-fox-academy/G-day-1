#include <stdio.h>
#include <stdlib.h>

int isItPrime(int a);

int main()
{
    int x;
    printf("Gimme a num.\n");
    scanf("%d", &x);

    if(isItPrime(x) == 1){
        printf("Wow, prime.");
    }else{
        printf("Not prime.");
    }
    return 0;
}

int isItPrime(int a)
{
    if(a % 2 == 0 || a % 3 == 0 || a % 4 == 0 || a % 5 == 0 || a % 7 == 0){
        return 0;
    }else{
        return 1;
    }
}