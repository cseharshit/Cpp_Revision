#include <iostream>

using namespace std;

int main() {
    int number, temp, remainder = 0, reverse = 0;
    cout<<"Enter a number: ";
    cin>>number;
    temp = number;
    while (temp != 0) {
        remainder = temp % 10;
        reverse = reverse * 10 + remainder;
        temp = temp / 10;
    }
    if (number == reverse) {
        cout << "Number is palindrome";
    } else {
        cout << "Number is not a palindrome";
    }
return 0;
}