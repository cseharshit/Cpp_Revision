#include <iostream>
using namespace std;

int main() {
  int operand1 = 100; //= is the assignment operator
  int operand2 = 200;
  cout << "Before using compound assignment operator:" << endl;
  cout << "operand1 = " << operand1 << endl;
  operand1 += operand2; //+=, -=, *=, /=, %= are Compound Assignment operators.
  cout << "operand1 += operand2 = " << operand1 << endl;

  return 0;
}