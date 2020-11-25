#include <iostream>
using namespace std;

int main() {
    int array[] = {1, 5, 10, 43, 101, 202};
    int objectives = 101;
    int sizeArray = 6; // sizeof(array) / sizeof(array[0])
    int result = binarySearch(array, 0, sizeArray - 1, objective)
    if (result == -1) {
        cout << "El elemento no se ha encontrado" << endl;
    } else {
        cout << "El elemento se ha encontrado" << result << endl;
    }
}