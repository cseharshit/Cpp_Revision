#include <iostream>
using namespace std;

// Iterative factorial function
int factorial(int n) {
    int fact = 1;

    if (n == 0) {
        fact = 1;
    }

    for (int counter = 1; counter <= n; counter++) {
        fact = fact * counter;

    }
    return fact;
}

int main() {
    int n,result;
    cout << "Enter the value of n: ";
    cin >> n;
    result=factorial(n);
    cout <<"Factorial of "<<n<<" is equal to "<<result;
    return 0;
}