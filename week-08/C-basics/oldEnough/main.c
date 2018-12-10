#include <stdio.h>
#include <stdlib.h>

char* isHeOlderThan18(int a);

int main()
{
    int age;
    printf("Hi, how old are you?\n");
    scanf("%d", &age);

    isHeOlderThan18(age);

    return 0;
}

char* isHeOlderThan18(int a)
{

    if(a > 17){
        printf("You can buy alcohol.");
    }else{
        printf("You can't buy alcohol.");
    }
}