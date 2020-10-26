#include <iostream>
using namespace std;

void left_rotate_array(int arr[], int size) {
    int i;
    int temp=arr[0];
    for(i=0;i<size-1;i++){
        arr[i]=arr[i+1];
    }
    arr[i]=temp;
}
void print_array(int arr[],int size) {
    for (int i = 0 ; i < size; i++){
        cout << arr[i] <<" ";
    }
    cout <<endl;
}

int main() {
    int size=5;
    int arr[size]={1,2,3,4,5};
    cout <<"Array before left rotation" <<endl;
    print_array(arr,size);
    left_rotate_array(arr,size);
    cout <<"Array after left rotation" <<endl;
    print_array(arr,size);
    return 0;   

}