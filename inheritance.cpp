#include <iostream>
using namespace std;

// Base class
class Square {
protected:
    double side;

public:
    // Parameterized constructor
    Square(double s) {
        side = s;
        cout << "Square constructor called" << endl;
    }

    // Member function to get perimeter
    double getPeri() {
        return 4 * side;
    }

    // Member function to get area
    double getArea() {
        return side * side;
    }

    // Destructor
    ~Square() {
        cout << "Square destructor called" << endl;
    }
};

// Derived class
class Cube : public Square {
public:
    // Constructor
    Cube(double s) : Square(s) {
        cout << "Cube constructor called" << endl;
    }

    // Member function to get surface area of cube
    double getArea() {
        return 6 * side * side;
    }

    // Member function to get volume of cube
    double getVolume() {
        return side * side * side;
    }

    // Destructor
    ~Cube() {
        cout << "Cube destructor called" << endl;
    }
};

// Main function
int main() {
    Square sq(5);
    cout << "Square Perimeter: " << sq.getPeri() << endl;
    cout << "Square Area: " << sq.getArea() << endl;

    cout << endl;

    Cube cb(5);
    cout << "Cube Surface Area: " << cb.getArea() << endl;
    cout << "Cube Volume: " << cb.getVolume() << endl;

    return 0;
}
