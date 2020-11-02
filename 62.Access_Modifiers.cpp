#include <iostream>
using namespace std;

class Bicycle {
    int gear; //gear is a private data member by default.

    public: // public is an access specifier. It allows the members to be accessed by anything.
    void braking() {
        gear=0; // Private members can only be accessed inside the class
        cout<< "Brakes are working";
    }
};

int main() {
    int i;
    Bicycle b1; //b1 is a object
    b1.braking();
    // The following would give an error.
    //cout<<b1.gear;
    return 0;
}

//There is another access modifier, protected.