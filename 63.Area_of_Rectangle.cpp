#include <iostream>
using namespace std;

class Rectangle {
    int length, width;

    public:
    void setLengthWidth(int l,int w){
        length=l;
        width=w;
    }

    int area(){
        return length*width;
    }
};

int main(){
    int length,width;
    Rectangle R1;
    cout<<"Enter length of rectangle: ";
    cin>>length;
    cout<<"Enter width of rectangle: ";
    cin>>width;

    R1.setLengthWidth(length,width);
    cout<<R1.area()<<endl;
    return 0;
}