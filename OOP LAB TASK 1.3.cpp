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
    Student s;
    Student* ptr = &s;

    ptr->firstName  = "Maryam";
    ptr->lastName   = "Chaudhary";
    ptr->marks      = 85.5;
    ptr->rollNumber = 1;
    ptr->displayStudentinfo();
    return 0;
}
