#include <iostream>
using namespace std;

void cube(int side) {
  side = side * side * side;
  cout << "side = " << side << endl;
}
 
int main() {
  int side = 10;
  cube(side);
  cout << "side = " << side << endl;
 
  return 0;
}