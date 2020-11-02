#include <iostream>
using namespace std;

class Bicycle {
    int gear;
    public:
    void braking() {
        cout<< "Brakes are working";
    }
};

int main() {
    int i;
    Bicycle b1;
    b1.braking();
    return 0;
}