#include <iostream>
using namespace std;

struct Student{
    string name;
    int roll_no;
};
int main() {
    Student s[3];
    s[0]={"Monica", 1};
    s[1]={"Phoebe",2};
    s[2]={"Rachel",3};

    for (int i =0; i<3; i++){
        cout << "Information of Student "<<(i+1)<<endl;
        cout <<"Name:\t\t"<<s[i].name<<endl;
        cout <<"Roll No.:\t"<<s[i].roll_no<<endl<<endl;
    }
    return 0;
}