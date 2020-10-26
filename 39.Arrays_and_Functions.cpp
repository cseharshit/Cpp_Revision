#include <iostream>

using namespace std;

void print_array(int number[], int size) {
  for (int i = 0; i < size; i++) {
    cout << number[i] << " ";
  }
  cout << endl;
}

void modify_array(int number[], int size) {
  for (int i = 0; i < size; i++) {
    if (number[i] < 50)
      number[i] = -1;
  }
  cout << "Values of array inside the function:" << endl;
  print_array(number,size);
}

int main() {
  int size = 8;
  int number[size] = {67, 89, 56, 43, 29, 15, 90, 67};

  cout << "Values of array before function call:" << endl;
  print_array(number,size);
  modify_array(number, size);
  cout << "Values of array after function call:" << endl;
  print_array(number,size);

}