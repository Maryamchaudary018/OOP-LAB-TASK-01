#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int rollNumber;
    float marks;

public:
    // Function to take input
    void getData() {
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Roll Number: ";
        cin >> rollNumber;
        cout << "Enter Marks: ";
        cin >> marks;
    }

    // Function to display data
    void displayData() {
        cout << "\n--- Student Details ---" << endl;
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main() {
    Student s;   // Object created

    s.getData();     // Input
    s.displayData(); // Output

    return 0;
}
