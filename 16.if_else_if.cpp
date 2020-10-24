#include <iostream>

using namespace std;

int main() {
  int var;
  cout <<"Enter a variable between 1 to 30: "<<endl;
  cin >>var;
  if (var >= 20) {
    cout << "Oreo it is." << endl;
  }
  else if (var >= 10) {
    cout << "What about Marie Gold " << endl;
  } 
  else if (var >= 5) {
    cout << "Seems like you'll be having a Good Day" << endl;
  }
  else {
    cout << "Parle-G it is." << endl;
  }
  return 0;
}