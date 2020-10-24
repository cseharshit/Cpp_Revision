#include <iostream>
using namespace std;

int main() {
    int number;
    bool flag=true;
    cout << "Enter a number: "<<endl;
    cin >> number;
    
    if (number<=1){
        flag=false;
    }

    for(int i =2; i<number/2; i++) {
        if (number%i==0){
            flag=false;
            break;
        }
    }
    if (flag) cout<<"Number is prime"<<endl;
    else cout<<"Number is not prime"<<endl;
    return 0;
}