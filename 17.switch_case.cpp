#include <iostream>

using namespace std;

int main() {
    char choice;
    cout << "Enter a character between A-F"<<endl;
    cin >> choice;
    switch (choice) {
        case 'A':
            cout << "A for Apple";
            break;
        case 'B':
            cout << "B for Bagel";
            break;
        case 'C':
            cout << "C for Cupcake";
            break;
        case 'D':
            cout << "D for Donut";
            break;
        case 'E':
            cout << "E for Eclair";
        case 'F':
            cout << "F for Fish";
            break; 
        default:
            cout << "You get nothing to eat.";
  }

  return 0;
}