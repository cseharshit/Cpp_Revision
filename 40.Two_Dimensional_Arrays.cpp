#include <iostream>

using namespace std;

int main() {

    int Student[2][2];

    Student[0][0] = 100;
    Student[0][1] = 134;

    Student[1][0] = 34;
    Student[1][1] = 189;
    for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 2; j++) {
    // Access element at row index i and column index j
       cout << Student[i][j] << " ";
  }
    return 0;
}
