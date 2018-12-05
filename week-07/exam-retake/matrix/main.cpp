#include <iostream>
#include <vector>

//feladat: páratlan sorok első tagjait, és a páros sorok utolsó tagjait adjuk össze

    int matrixSum(std::vector<std::vector<int>> matrix);


int main() {

    std::vector<std::vector<int>> matrix1 = {
            {1, 2, 5},
            {3, 4, 36},
            {5, 7, 9}
    };

    // TEST 1

    if(matrixSum(matrix1) == 42) {
        std::cout << "Juhuuuu" << std::endl;
    }else{ std::cout << "szar" << std::endl;
    }

    return 0;
}

int matrixSum(std::vector<std::vector<int>> matrix) {
    int counter = 0;

    for(int i = 0; i < matrix.size(); i++) {
        if(i % 2 == 0) {                //ha páros a sor
            counter += matrix[i][0];    //mindig a sor első elemét adjuk hozzá
        }else{
            counter +=matrix[i][matrix.size() - 1];
        }
    }
    return counter;
}
