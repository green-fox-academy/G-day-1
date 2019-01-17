#include "most_words.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int check_how_many_words(char* path) {
    FILE *fpointer = fopen(path, "r");

    char line[512];
    int counter = 0;
    if (fpointer == NULL) {
        printf("Cannot find file.");
        return -1;
    } else {
        while (fgets(line, 512, fpointer) != NULL) {
            char *token;
            token = strtok(line, " :,.!?;\"");
            while( token != NULL ) {
                ++counter;
                token = strtok(NULL, " :,.!?;\"");
            }
        }
    }

    fclose(fpointer);
    return counter;

}

int read_from_file(char* path) {

    char **words = malloc(check_how_many_words(path) * sizeof(char *));
    FILE *fpointer = fopen(path, "r");
    int counter = 0;

    if (fpointer == NULL) {
        printf("Cannot find file.");
        return -1;
    } else {
        char line[256];
        while (fgets(line, 256, fpointer) != NULL) {
            char *word = strtok(line, " :,.!?;\"");
            while(word != NULL){
                words[counter] = malloc((strlen(word) + 1) * sizeof(char));
                strcpy(words[counter], word);
              //  printf("%s\n", words[counter]);
                ++counter;
                word = strtok(NULL, " :,.!?;\"");
            }
        }
    }

    for (int i = 0; i < counter; i++) {
        printf("%s\n", words[i]);
    }
    for (int j = 0; j < counter; ++j) {
        free(words[j]);
    }


    free(words);
    fclose(fpointer);

    return 0;
}

