#include<iostream>
#include<string>
using namespace std;
struct Student {
    string firstName;
    string lastName;
    float marks;
    int rollNumber;
    void displayStudentinfo() {
        cout << "Full Name  : " << firstName << " " << lastName << endl;
        cout << "Marks      : " << marks << endl;
        cout << "Roll Number: " << rollNumber << endl;
    }
};
int main() {
    Student s[3];

    s[0].firstName  = "Maryam";
    s[0].lastName   = "Chaudhary";
    s[0].marks      = 85.5;
    s[0].rollNumber = 2;

    s[1].firstName  = "Ali";
    s[1].lastName   = "Khan";
    s[1].marks      = 90.0;
    s[1].rollNumber = 3;

    s[2].firstName  = "Sara";
    s[2].lastName   = "Ahmed";
    s[2].marks      = 78.0;
    s[2].rollNumber = 4;

    for(int i = 0; i < 3; i++) {
        s[i].displayStudentinfo();
    }
    return 0;
}
