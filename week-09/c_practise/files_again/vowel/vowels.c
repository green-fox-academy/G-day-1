#include "vowels.h"

int read_from_file(char* path, char* temp_array)
{
    FILE* fpointer = fopen(path, "r");
    char line[256];
    int size = 0;


    if(fpointer == NULL){
        printf("Cannot read file.");
        return -1;
    }else{
        while(fgets(line, sizeof line, fpointer ) != NULL){

           // printf("%s", strlwr(line));
           strcat(temp_array, line);
        }

        size = strlen(temp_array);
    }
    fclose(fpointer);
    return size;
}

int write_to_file(char* path, char* temp_array, char* charac) {
    FILE *fpointer = fopen(path, "w+");

    int vowels = 0;

    for (int i = 0; i < strlen(temp_array); ++i) {
        if(temp_array[i]=='a' || temp_array[i]=='e' || temp_array[i]=='i' ||
           temp_array[i]=='o' || temp_array[i]=='u'){
            vowels++;

            char asd[2];
            asd[0] = temp_array[i];
            asd[1] = '\0';

            strcat(charac, asd);
        }
    }
    printf("%d,", vowels);

    fputs(charac, fpointer);
    printf("\n%s", charac);

    fclose(fpointer);

    return vowels;
}
