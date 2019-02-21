#include <iostream>
#include <vector>

void heapify(int myArray[], int size, int x, int &counter, int order = 1);
void heapSortInit(int myArray[], int size, int &counter, int order = 1);
int* heapSort(int unsorted[], int size, int &counter, int order = 1);
void heapify(std::vector<int> &myVector, int size, int x, int &counter, int order = 1);
void heapSortInit(std::vector<int> &myVector, int size, int &counter, int order = 1);
std::vector<int> heapSort(std::vector<int> unsorted, int size, int &counter, int order = 1);

int main() {

    int counter = 0;
    int myArray[] = {32, 34, 99, 55, 230, 24, 12, 2000, 30};
    int size = sizeof(myArray) / sizeof(myArray[0]);

    heapSort(myArray, size, counter, 0);
    for (int i = 0; i < size; ++i) {
        std::cout << "Array: decreasing: " << myArray[i] << std::endl;
    }

    std::vector<int> myVector = {32, 66, 77, 1, 2, 0, 6, 4, 3};

    std::vector<int> hali = heapSort(myVector, myVector.size(), counter);
    for (int j = 0; j < hali.size(); ++j) {
        std::cout << "Vector increasing: " << hali[j] << std::endl;
    }

    return 0;
}

void heapify(int myArray[], int size, int x, int &counter, int order)
{
    int temp;
    int largest = x;
    int leftChild = 2 * x + 1;
    int rightChild = 2 * x + 2;

    if(order == 1){
        if (leftChild < size && myArray[leftChild] > myArray[largest]) {
            largest = leftChild;
            counter++;
        }
        if (rightChild < size && myArray[rightChild] > myArray[largest]) {
            largest = rightChild;
            counter++;
        }
        if (largest != x) {
            temp = myArray[x];
            myArray[x] = myArray[largest];
            myArray[largest] = temp;
            heapify(myArray, size, largest, counter);
            counter++;
        }
    }else{
        if (leftChild < size && myArray[leftChild] < myArray[largest]) {
            largest = leftChild;
            counter++;
        }
        if (rightChild < size && myArray[rightChild] < myArray[largest]) {
            largest = rightChild;
            counter++;
        }
        if (largest != x) {
            temp = myArray[x];
            myArray[x] = myArray[largest];
            myArray[largest] = temp;
            heapify(myArray, size, largest, counter, 0);
            counter++;
        }
    }
}

void heapSortInit(int myArray[], int size, int &counter, int order)
{
    int temp;
    for (int i = size / 2 - 1; i >= 0; i--)
        heapify(myArray, size, i, counter, order);
    for (int i = size - 1; i >= 0; i--) {
        temp = myArray[0];
        myArray[0] = myArray[i];
        myArray[i] = temp;
        heapify(myArray, i, 0, counter, order);
        counter++;
    }
}

int* heapSort(int unsorted[], int size, int &counter, int order)
{
    int* sorted = unsorted;
    heapSortInit(sorted, size, counter, order);
    return sorted;
}

void heapify(std::vector<int> &myVector, int size, int x, int &counter, int order)
{
    int temp;
    int largest = x;
    int leftChild = 2 * x + 1;
    int rightChild = 2 * x + 2;

    if(order == 1){
        if (leftChild < size && myVector[leftChild] > myVector[largest]) {
            largest = leftChild;
            counter++;
        }
        if (rightChild < size && myVector[rightChild] > myVector[largest]) {
            largest = rightChild;
            counter++;
        }
        if (largest != x) {
            temp = myVector[x];
            myVector[x] = myVector[largest];
            myVector[largest] = temp;
            heapify(myVector, size, largest, counter);
            counter++;
        }
    }else{
        if (leftChild < size && myVector[leftChild] < myVector[largest]) {
            largest = leftChild;
            counter++;
        }
        if (rightChild < size && myVector[rightChild] < myVector[largest]) {
            largest = rightChild;
            counter++;
        }
        if (largest != x) {
            temp = myVector[x];
            myVector[x] = myVector[largest];
            myVector[largest] = temp;
            heapify(myVector, size, largest, counter, 0);
            counter++;
        }
    }
}

void heapSortInit(std::vector<int> &myVector, int size, int &counter, int order)
{
    int temp;
    for (int i = size / 2 - 1; i >= 0; i--)
        heapify(myVector, size, i, counter, order);
    for (int i = size - 1; i >= 0; i--) {
        temp = myVector[0];
        myVector[0] = myVector[i];
        myVector[i] = temp;
        heapify(myVector, i, 0, counter, order);
        counter++;
    }
}

std::vector<int> heapSort(std::vector<int> unsorted, int size, int &counter, int order)
{
    std::vector<int> sorted = std::move(unsorted);
    heapSortInit(sorted, size, counter, order);
    return sorted;
}

