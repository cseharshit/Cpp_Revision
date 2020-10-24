#include <iostream>
using namespace std;

int main() {
    int a=5;
    do {
        cout << "Hii, I will execute once, no matter what."<<endl;
        cout << "The value of a is "<<a<<endl;
        a++;
    } while(a<=5);

    return 0;
}