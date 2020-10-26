#include <iostream>
using namespace std;

//global_var is accessible throughout the programs;
//If value is changed in one program, it'd be reflected in others as well.
int global_var=40;

void func() {
    int local_var=20;
    cout <<"global in func= "<<global_var<<"\tlocal in func = "<<local_var<<endl;
}

int main() {
    int local_var=50;
    cout <<"global in main= "<<global_var;
    cout <<"\tlocal in main= "<<local_var<<endl;
    local_var=45;
    global_var=100;
    func();
    return 0;
}