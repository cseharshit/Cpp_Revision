#include <iostream>
using namespace std;

class Square{
    int side;

    public: 
    void setSide(int s);
    int area();
};

int main() {
    int s;
    Square s1;
    cout<<"Enter the side of the square: ";
    cin>>s;
    s1.setSide(s);
    cout<<s1.area()<<endl;
    return 0;
}

void Square::setSide(int s){
    side=s;
}

int Square::area(){
    return side*side;
}