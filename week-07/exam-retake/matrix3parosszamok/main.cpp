#include <iostream>
#include <vector>

int myFunction(std::vector<std::vector<int>> a);


int main() {

    std::vector<std::vector<int>> matrix1 = {
            {1, 2, 5,},
            {3, 4, 36,},
            {54, 7, 9}
    };


    if(myFunction(matrix1) == 96) {
        std::cout << "Cool" << std::endl;
    }else{
        std::cout << "Nemnem, bena" << std::endl;
    }

    std::cout << "Ez lett volna a helyes valasz: " << myFunction(matrix1) << std::endl;
    return 0;
}

int myFunction(std::vector<std::vector<int>> a){
    std::vector<std::vector<int>> myVector;

    int size = a.size();
    int x = 0;

    for (int i = 0; i < size; ++i) {
        std::vector<int> column;
        for (int j = 0; j < size; ++j) {
            if(a[i][j] % 2 == 0) {
                x += a[i][j];
            }
        }
    }
    return x;

}