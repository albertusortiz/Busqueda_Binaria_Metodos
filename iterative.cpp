#include <iostream>
using namespace std;

int binarySearchRecursive(int array[], int left, int right, int objective) {
    
}

int main() {
    int array[] = {1, 5, 10, 43, 101, 202};
    int objective = 101;
    int sizeArray = 6; // sizeof(array) / sizeof(array[0])
    int result = binarySearchRecursive(array, 0, sizeArray - 1, objective);
    if (result == -1) {
        cout << "El elemento no se ha encontrado: " << endl;
    } else {
        cout << "El elemento se ha encontrado: " << result << endl;
    }
}