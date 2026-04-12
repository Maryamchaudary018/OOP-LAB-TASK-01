#include <iostream>
using namespace std;

class Calculator {
private:
    float num1, num2;

public:
    void input();
    float add();
    float subtract();
    float multiply();
    float divide();
};

// Function Definitions

void Calculator::input() {
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;
}

float Calculator::add() {
    return num1 + num2;
}

float Calculator::subtract() {
    return num1 - num2;
}

float Calculator::multiply() {
    return num1 * num2;
}

float Calculator::divide() {
    if (num2 == 0) {
        cout << "Error: Division by zero not allowed!" << endl;
        return 0;
    }
    return num1 / num2;
}

int main() {
    Calculator c;
    int choice;

    c.input();

    cout << "\nChoose Operation:\n";
    cout << "1. Add\n2. Subtract\n3. Multiply\n4. Divide\n";
    cin >> choice;

    switch (choice) {
        case 1:
            cout << "Result: " << c.add();
            break;
        case 2:
            cout << "Result: " << c.subtract();
            break;
        case 3:
            cout << "Result: " << c.multiply();
            break;
        case 4:
            cout << "Result: " << c.divide();
            break;
        default:
            cout << "Invalid choice!";
    }

    return 0;
}
