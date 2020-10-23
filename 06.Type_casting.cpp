#include <iostream>
using namespace std;

int main() {
    // Implicit Type-casting
    int a = 19.5;
    cout << "a = "<<a<<endl;

    //Explicit Type Casting
    char character='X';
    int ASCII;
    ASCII=(int) character;
    cout << "Ascii value of "<<character<<" = "<<ASCII;
    
}