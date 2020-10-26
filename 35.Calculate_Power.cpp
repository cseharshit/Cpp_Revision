#include <iostream>
using namespace std;

int power (int base , int exponent ) {
    if (exponent==0) return 1;
    return base*power(base,exponent-1);
}

int main(){
    int number, pow, result;
    cout <<"Enter number: ";
    cin >>number;
    cout << "Enter power: ";
    cin >>pow;
    result=power(number,pow);
    cout<<"Result = "<<result<<endl;
    return 0;
}