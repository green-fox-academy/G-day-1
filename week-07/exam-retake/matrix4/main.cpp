#include <iostream>
#include <vector>

// Feladat: Ha 2 matrix ugyanazon a helyen szereplő számok összege páratlan, adjuk hozzá a listához.

int myFunction(std::vector<std::vector<int>> a, std::vector<std::vector<int>> b);

int main() {

    std::vector<std::vector<int>> matrix1 = {{2, 1},
                                            {1, 1}};
    std::vector<std::vector<int>> matrix2 = {{1,  4},
                                             {6, 6}};


    if(myFunction(matrix1, matrix2) == 22) {
        std::cout << "Correct, you are cool!" << std::endl;
    }else{
        std::cout << "No-no..." << std::endl;
    }

    std::cout << "The correct number is: " << myFunction(matrix1, matrix2) << std::endl;

    return 0;
}

int myFunction(std::vector<std::vector<int>> a, std::vector<std::vector<int>> b) {
    std::vector<std::vector<int>> myVector;
    int size = a.size();
    int x = 0;

    for (int i = 0; i < size; ++i) {
        std::vector<int> column;
        for (int j = 0; j < size; ++j) {
            if((a[i][j] + b [i][j]) % 2 == 1) {
                x += a[i][j] + b [i][j];
            }
        }
    }return x;
}
