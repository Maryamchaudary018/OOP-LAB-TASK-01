#include <iostream>
using namespace std;

class Voter {
private:
    string name;
    int age;

public:
    void getData();
    bool isEligible();
};

// Function Definitions Outside Class

void Voter::getData() {
    cout << "Enter Name: ";
    cin >> name;
    cout << "Enter Age: ";
    cin >> age;
}

bool Voter::isEligible() {
    if (age > 18)
        return true;
    else
        return false;
}

int main() {
    Voter v;

    v.getData();

    if (v.isEligible())
        cout << "\nEligible for Voting " << endl;
    else
        cout << "\nNot Eligible for Voting " << endl;

    return 0;
}
