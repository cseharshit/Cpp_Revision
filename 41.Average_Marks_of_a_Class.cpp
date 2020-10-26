#include <iostream>
using namespace std;

double average(double marks[] , int size) {
    double average = 0;
    for(int i=0;i<size;i++){
        average+=marks[i];
    }
    average/=size;
    return average;
}

int main(){
    int size = 8;
    double result;
    double number [size] = {71, 89, 76, 25, 23, 10, 90, 63};
    result = average (number,size);
    cout << "average = " << result;
    return 0;
}