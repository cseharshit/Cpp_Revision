#include <iostream>
using namespace std;
int recursive_function(int);

int main() {

    int var, output;
    var=5;
    output=recursive_function(var);
    cout <<"Output= "<<output;
    return 0;
}

int recursive_function(int a){
    int output;
    if(a == 1){
        output=100;
        return output;
    }
    else a--;
    return recursive_function(a);
}