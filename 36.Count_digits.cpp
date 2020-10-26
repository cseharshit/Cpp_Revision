#include <iostream>
using namespace std;

int count_digits(int num){
    if(abs(num)/10 == 0) return 1;
    else return (1+ count_digits(num/10));
}

int main() {
    int num;
    cout << "Enter an integer: ";
    cin >> num;
    cout <<"Number of digits in "<<num<<" are "<<count_digits(num)<<endl;
    return 0;
}