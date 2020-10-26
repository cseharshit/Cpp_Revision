#include <iostream>
using namespace std;

int add_diagonal(int arr[3][3], int row, int col){
    int sum=0;
    for (int i = 0; i<row;i++){
    for (int j =0;j < col; j++){
        if (i == j){
        sum+=arr[i][j];
        }
    }
    }
    return sum;
}

void print_array (int arr[3][3], int row, int column){
  for (int i = 0; i < row; i++) {
    for (int j = 0; j < column; j++) {
       cout << arr[i][j] << " ";
  }
  cout << endl;
  }
}

int main(){
    int result;
    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    print_array(arr,3,3);
    result=add_diagonal(arr,3,3);
    cout<<"sum = "<<result;
    return 0;
}