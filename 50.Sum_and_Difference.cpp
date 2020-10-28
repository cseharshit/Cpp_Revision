#include <iostream>

using namespace std;

void sum_difference (int * value1, int * value2) {
    int diff = 0, sum = 0;
    sum = * value1 + * value2;
    diff = * value1 - * value2;
    if (diff < 0) {
        diff = diff * - 1;
    } 
    * value1 = sum;
    * value2 = diff;

}
int main() {
    int value1 = 10;
    int value2 = 15;

    cout << "Values before calling function:" << endl;
    cout << value1 << endl;
    cout << value2 << endl;
    sum_difference( & value1, & value2);
    cout << "Values after calling function:" << endl;
    cout << value1 << endl;
    cout << value2 << endl;

    return 0;
}