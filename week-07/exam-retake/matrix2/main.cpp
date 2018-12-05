#include <iostream>
#include <vector>

std::vector<std::vector<int>> sumMatrix(std::vector<std::vector<int>> mat1, std::vector<std::vector<int>> mat2);

int main() {

    std::vector<std::vector<int>> lol = {{2, 1, 3},
                                         {0, 1, 5},
                                         {7, 8, 10}};
    std::vector<std::vector<int>> miaf = {{0,  3, 12},
                                          {-1, 1, 8},
                                          {4, 5, 55}};
    sumMatrix(lol, miaf);

    std::vector<std::vector<int>> result = {{2, 4, 15},
                                            {-1, 2, 13},
                                            {11, 13, 65}};

    if(sumMatrix(lol, miaf) == result) {
        std::cout << "szupiiiiiiiiiiiiii, megy" << std::endl;
    }else{
        std::cout << "hahahaahahah szerencsétlen" << std::endl;

    }


    return 0;
}

std::vector<std::vector<int>> sumMatrix(std::vector<std::vector<int>> mat1, std::vector<std::vector<int>> mat2) {

    std::vector<std::vector<int>> newMatrix;
    int size = mat1.size();
    int sum = 0;

    for (int i = 0; i < size; ++i) {
        std::vector<int> column;
        for (int j = 0; j < size; ++j) {
            sum = mat1[i][j] + mat2[i][j];
            column.push_back(sum);
        }
        newMatrix.push_back(column);

    }return newMatrix;
}

