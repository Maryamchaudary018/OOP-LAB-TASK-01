#include <iostream>
#include <string>
using namespace std;

struct Student {
    // Data Members
    string firstName;
    string lastName;
    float marks;
    int rollNumber;

    // Member Function
    void displayStudentInfo() {
        cout << "Full Name  : " << firstName << " " << lastName << endl;
        cout << "Marks      : " << marks << endl;
        cout << "Roll Number: " << rollNumber << endl;
    }
};

int main() {
    // Structure variable
    Student s1;

    // Assigning values to data members
    s1.firstName  = "Maryam";
    s1.lastName   = "Chaudhary";
    s1.marks      = 85.5;
    s1.rollNumber = 02;
    // Calling the member function
    s1.displayStudentInfo();
    return 0;
}
