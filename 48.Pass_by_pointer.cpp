#include <iostream>

using namespace std;

void passByPointer(int *p) {
    *p = *p * 10;
    cout << "Value of var inside function = " << *p<<endl;
}

int main() {
    int num = 10;
    cout << "Value of var before call = " << num<<endl;
    passByPointer(&num);
    cout << "Value of var after call = "<<num<<endl;
    return 0;
}