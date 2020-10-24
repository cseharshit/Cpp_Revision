#include <iostream>
using namespace std;

int main() {
    int var;
    string result;
    cout <<"Enter a value : "<<endl;
    cin >> var;
    result=(var>100) ? "You can eat chinese" : "Go with Indian";
    cout << result;
    return 0;
}