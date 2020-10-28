#include <iostream>

using namespace std;

void printArray(int * arr, int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void set_odd(int * arr, int size) {
    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 == 1) {
            arr[i] = -1;
        }
    }
}

int main() {
    int size = 5;
    int * arr = new int[size];
    for (int i = 0; i < size; i++) {
    arr[i] = i;
    }
    printArray(arr, size);
    set_odd(arr, size);
    printArray(arr, size);
    return 0;
}