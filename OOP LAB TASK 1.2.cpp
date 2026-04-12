#include <iostream>
using namespace std;

class Rectangle {
private:
    int length;
    int width;

public:
    void setDimensions();
    int area();
    int perimeter();
};

// Function Definitions Outside Class

void Rectangle::setDimensions() {
    cout << "Enter Length: ";
    cin >> length;
    cout << "Enter Width: ";
    cin >> width;
}

int Rectangle::area() {
    return length * width;
}

int Rectangle::perimeter() {
    return 2 * (length + width);
}

int main() {
    Rectangle r;  // Object

    r.setDimensions();

    cout << "\nArea: " << r.area() << endl;
    cout << "Perimeter: " << r.perimeter() << endl;

    return 0;
}
