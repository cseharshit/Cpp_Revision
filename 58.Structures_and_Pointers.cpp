#include <iostream>
using namespace std;

struct Student {
    string name;
    int roll_number;
} s1,s2;

int main() {
    struct Student *ps1, *ps2;
    ps1=&s1;
    
    //Accessing using indirection and dot operator.
    (*ps1).name="Ben";
    (*ps1).roll_number=1;
    cout <<"Name = "<<(*ps1).name<<endl;
    cout <<"Roll = "<<(*ps1).roll_number<<endl;

    ps2=&s2;
    
    //Accessing using arrow operator
    ps2->name = "Emma";
    ps2->roll_number=2;
    cout <<"Name = "<<(*ps2).name<<endl;
    cout <<"Roll = "<<(*ps2).roll_number<<endl;

    return 0;
}