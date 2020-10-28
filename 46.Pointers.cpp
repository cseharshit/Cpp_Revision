#include <iostream>
using namespace std;
int main() {
    int var=5;
    int *ptr;
    ptr=&var;
    cout <<"Value of var = "<<var<<endl;
    cout <<"Address of var = "<<ptr<<endl;
    //De referencing a pointer
    cout << "Indirection pointer pointing to var = "<<*ptr<<endl;
    return 0;
}