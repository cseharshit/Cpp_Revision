#include <iostream>

using namespace std;

void printArray(int * arr, int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void delete_element(int *&arr, int size, int index) {
    int * new_arr = new int[size - 1];
    for (int i = 0; i < size - 1; i++) {
        if (i == index || i > index) {
            new_arr[i] = arr[i + 1];
        } 
        else {
            new_arr[i] = arr[i];

        }
    }
    delete[] arr;
    arr = new_arr;
}

int main() {

    int size = 5;
    int index = 3;
    // cout<<"Enter size of array and index to delete";
    // cin>>size;
    // cin>>index;
    int * arr = new int[size];
    for (int i = 0; i < size; i++) {
    arr[i] = i;
    }
    delete_element(arr, size, index);
    printArray(arr, size - 1);

    return 0;
}