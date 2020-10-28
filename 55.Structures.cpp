#include <iostream>
using namespace std;

//Structure definition
struct Student {
    string name;
    int roll_number;
};

//Using structure definition and declaration together.
struct Teacher {
    string name;
    int subject_code;
    double salary;
} t1,t2,t3;

int main() {
    //Structure Declaration
    Student s1,s2,s3;
    
    //Assigning values to s1
    s1.name="Chandler";
    s1.roll_number=1;
    
    //Accessing values of s1
    cout <<"Name = "<<s1.name<<endl;
    cout <<"Roll_No. = "<<s1.roll_number<<endl;


    //Accessing values to s2 and s3
    s2 = {"Joey",2};
    s3= {"Ross",3};

    cout <<"Name = "<<s2.name<<endl;
    cout <<"Roll_No. = "<<s2.roll_number<<endl;
    cout <<"Name = "<<s3.name<<endl;
    cout <<"Roll_No. = "<<s3.roll_number<<endl;


    cout << "Size of s1,s2,s3 = "<<sizeof(s1)<<","<<sizeof(s2)<<","<<sizeof(s2)<<endl;
    return 0;
}