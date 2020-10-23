#include <iostream>
using namespace std;

int main() {
    int a,b;
    a=10;
    b=20;
    cout << "a: "<<a<<" b: " <<b<<endl;
    /*Swapping using third variable
    int temp;
    temp=a;
    a=b;
    b=temp;
    */
    //Swapping without third variable
    a=a+b;
    b=a-b;
    a=a-b;
    cout << "a: "<<a<<" b: " <<b<<endl;

}