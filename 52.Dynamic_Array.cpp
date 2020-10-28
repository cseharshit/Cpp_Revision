#include <iostream>
using namespace std;

void printArray(int arr[], int size) {
  for (int i = 0; i < size; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;
}

int main() {
    int *Array = new int[5];
    for (int i=0; i<5; i++) {
        Array[i] = i;
    }

    printArray(Array,5);

    //Resizing the array
    int *ResizeArray = new int[10];
    for (int i=0;i<5;i++) ResizeArray[i] = Array[i];
    delete[] Array;
    Array=ResizeArray;
    Array[6]=10;
    
    return 0;
}