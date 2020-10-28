#include <iostream>

using namespace std;

void area(double * length, double * width, double * result) {
  *result = *length * *width;
}

int main() {
    double length = 198.14, width = 200.14;
    double result = 0;
    cout << "Before calling function area:" << endl;
    cout << "result = " << result << endl;
    area( & length, & width, & result);
    cout << "After calling function area:" << endl;
    cout << "result = " << result << endl;
    return 0;
}