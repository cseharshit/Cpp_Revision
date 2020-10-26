#include <iostream>
using namespace std;

int factorial(int n){
    if (n<0){
        return -1;
    }
    if (n==1|| n==0) {
        return 1;
    }
    else return n*factorial(n-1);
}

int main() {
    int n,result;
    cout << "Enter the value of n: ";
    cin >> n;
    result=factorial(n);
    cout <<"Factorial of "<<n<<" is equal to "<<result;
    return 0;
}