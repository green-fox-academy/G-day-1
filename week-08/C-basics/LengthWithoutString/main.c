#include <stdio.h>
#include <stdlib.h>

int length_wo_string(char* x);

int main()
{
    char * name;
    printf("Gimme your name, now!\n");
    scanf("%s", &name);

    printf("%d", length_wo_string((char *) &name));

    return 0;
}
int length_wo_string(char* x)
{
    int i = 0;
    while(x[i] != '\0'){
       i++;
    }
    return i;
}

