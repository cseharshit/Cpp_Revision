#include <iostream>
using namespace std;

int main() {
    int binary,decimal,remainder,product;
    binary=0;
    product=1;

    cout<<" Enter the decimal number. "<<endl;
    cin >>decimal;

    while(decimal!=0) {
        remainder=decimal%2;
        binary=binary+(remainder*product);
        decimal=decimal/2;
        product*=10;

    }

    cout<<"Binary: "<<binary;
    return 0;

}