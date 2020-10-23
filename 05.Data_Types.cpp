#include <iostream>
using namespace std;

int main(){
    int a=1000;
    float b=10.5;
    char c='a';
    double d=15.1667634;
    bool e = false;
    // Data Type modifiers
    long int l = 1234567890;
    short int s = 123;
    unsigned int u = 12;
    signed int v = -90;
    long double ak = 1233546545678;

    cout << "int = "<<a<<endl<<"Size of int= "<<sizeof(a)<<endl; 
    cout << "float = "<<b<<endl<<"Size of float= "<<sizeof(b)<<endl; 
    cout << "char = "<<c<<endl<<"Size of char= "<<sizeof(c)<<endl; 
    cout << "double = "<<d<<endl<<"Size of double= "<<sizeof(d)<<endl; 
    cout << "boolean = "<<e<<endl<<"Size of boolean= "<<sizeof(e)<<endl; 
    cout << "long int = "<<l<<endl<<"Size of long int= "<<sizeof(l)<<endl; 
    cout << "short int = "<<s<<endl<<"Size of short int= "<<sizeof(s)<<endl; 
    cout << "signed int = "<<u<<endl<<"Size of signed int= "<<sizeof(u)<<endl; 
    cout << "unsigned int = "<<v<<endl<<"Size of unsigned int= "<<sizeof(v)<<endl; 
    cout << "long double = "<<ak<<endl<<"Size of long double= "<<sizeof(ak)<<endl; 

}