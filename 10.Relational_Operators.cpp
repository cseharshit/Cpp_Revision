#include <iostream>
using namespace std;

int main() {

  int operand1 = 100;
  int operand2 = 25;
  cout << " operand1 = " << operand1 << " , operand2 = " << operand2 << endl;
  cout << " operand1 <  operand2 " << (operand1 < operand2) << endl;
  cout << " operand1 <= operand2 " << (operand1 <= operand2 )<< endl;
  cout << " operand1  > operand2 " << (operand1 > operand2) << endl;
  cout << " operand1 >= operand2 " << (operand1 >= operand2) << endl;
  cout << " operand1 == operand2 " << (operand1 == operand2) << endl;
  cout << " operand1 != operand2 " << (operand1 != operand2) << endl;
      
  return 0;
}