#include <iostream>
using namespace std;

void sort_elements(int arr[], int size) {
   int temp;
   for (int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if (arr[i]<arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }   
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
    cout <<"Array before sorting" <<endl;
    print_array(arr,size);
    sort_elements(arr,size);
    cout <<"Array after sorting" <<endl;
    print_array(arr,size);
    return 0;   

}