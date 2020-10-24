#include <iostream>
using namespace std;

int main() {
  
    int operand1 = 3;
    int operand2 = 2;
    cout << "operand1 = " << operand1 << " , operand2 = " << operand2 << endl;
    //  Bitwise AND
    cout << "operand1 & operand2 = " << (operand1 & operand2) << endl;
    //  Bitwise OR
    cout << "operand1 | operand2 = " << (operand1 | operand2 )<< endl;
    //  Bitwise XOR
    cout << "operand1 ^ operand2 = " << (operand1 ^ operand2) << endl;
    //  Left-Shift Operator
    cout << "2 << 1 = " << (2 << 1) << endl;
    //  Right-Shift Operator
    cout << "2 >> 1 = " << (2 >> 1) << endl;
    return 0;
}