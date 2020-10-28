#include <iostream>

using namespace std;

struct Student {
    string name;
    int roll_number;
};

//return type as structure 
Student registerStudent(string name, int roll_number) {
    Student s;
    s.name = name;
    s.roll_number = roll_number;
    return s;
}
// Passing structure to a function
void printStudent(Student s) {
    cout << "Name = " << s.name << endl;
    cout << "Roll Number = " << s.roll_number << endl;
}

int main() {
    struct Student s[3];
    s[0] =  registerStudent("Gunther", 1);
    printStudent(s[0]);
    s[1] = registerStudent( "Frank", 2);
    printStudent(s[1]);
    return 0;
}