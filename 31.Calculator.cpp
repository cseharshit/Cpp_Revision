#include <iostream>

using namespace std;

double add(double number1, double number2) {
  double result = number1 + number2;
  return result;
}

double subtract(double number1, double number2) {
  double result = number1 - number2;
  return result;
}

double multiply(double number1, double number2) {
  double result = number1 * number2;
  return result;
}

double divide(double number1, double number2) {
  double result = number1 / number2;
  return result;
}

double test(double number1, char operation, double number2) {
  switch (operation) {
  case '+':
    return add(number1, number2);
  case '-':
    return subtract(number1, number2);
  case '*':
    return multiply(number1, number2);
  case '/':
    return divide(number1, number2);
  default:
    return -1;
  }

}

int main() {
    double number1,number2,result;
    char operation;
    cout <<"Enter a = ";
    cin >> number1;
    cout <<"Enter b = ";
    cin >> number2;
    cout << "Enter operation(+,-,*,/): ";
    cin >> operation;
    cout << number1 << operation << number2 << " = ";

    result = test(number1, operation, number2);
    cout << result;
    return 0;
}