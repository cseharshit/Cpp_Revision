#include <iostream>
using namespace std;

int main() {
    int i,j;
    for (i=5;i<=10;i++) {
        cout <<"i= "<<i<<endl;
        if (i==9){
            cout<<"Let's skip the table of 9, cause it's easy"<< endl;
            continue; // I am continue. I will make us move forward and skip loose ends.
        }
        for(j=1;j<=10;j++) {
            if(i==7&&j==7){
                cout<<"\n A little halt at 49";
                break; //I am break. I would throw us out of this loop.
            } 
                
            cout<< i*j<<" ";
        }
        cout <<endl;
    }
    return 0;
}