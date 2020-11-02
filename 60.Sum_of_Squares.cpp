#include <iostream>
using namespace std;

int square(int num){
    return num * num;
}

int main(){
    int n,sum=0;
    cout << "Enter the number of values: ";
    cin >> n;
    cout <<" Enter the values: "<<endl;
    for (int i = 0; i<n; i++){
        int value;
        cin >> value;
        sum+=square(value);
    }
    cout << "Sum of the squares: "<<sum<<endl;
}