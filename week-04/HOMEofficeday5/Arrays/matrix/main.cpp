#include <iostream>
#include <string>

int main(int argc, char* args[]) {

    // - Create (dynamically) a two dimensional array
    //   with the following matrix. Use a loop!
    //   by dynamically, we mean here that you can change the size of the matrix
    //   by changing an input value or a parameter or this combined
    //
    //   1 0 0 0
    //   0 1 0 0
    //   0 0 1 0
    //   0 0 0 1
    //
    // - Print this two dimensional array to the output

    int matrix[value][value];
    for (int i = 0; i < value; ++i) {
        for (int j = 0; j < value; ++j) {
            if(j == i){
                matrix[i][j] = 1;
            }else {
                matrix[i][j] = 0;
            }

        }
        
    }
    return 0;
}