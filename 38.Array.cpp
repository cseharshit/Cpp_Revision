#include <iostream>
using namespace std;

int main() {
    // Array Declaration
    int arr[5];

    // Array initialization method 1
    int arr2[4]={ 100,101,102,103 };
    
    // Array Initialization method 2
    arr[0]=1;
    arr[1]=2;
    arr[2]=3;
    arr[3]=4;
    arr[4]=5;

    // Accessing the array
    for (int i=0; i<5;i++){
        cout<<arr[i]<<" ";

    }
    cout<<endl;
    
    // Array Updation
    arr[3]=50;
    
    for (int i=0; i<5;i++){
        cout<<arr[i]<<" ";

    }
    cout<<endl;
    
    return 0;

}