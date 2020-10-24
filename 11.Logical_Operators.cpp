#include <iostream>
using namespace std;

int main() {
  
    bool operand1 = 4 > 10;
    bool operand2 = true;
    cout << "Values of operands are:";
    
    cout << "operand1 = " << operand1 << " , operand2 = " << operand2 << endl;
    //   Logical And (&&)
    cout << "operand1 && operand2 = " << (operand1 && operand2) << endl;
    //   Logical Or (||)
    cout << "operand1 || operand2 = " << (operand1 || operand2) << endl;
    //   Not equals operator (!)
    cout << "!operand1 = " << (!operand1) << endl;
    cout << "!operand2 = " << (!operand2) << endl;
    
    return 0;
}