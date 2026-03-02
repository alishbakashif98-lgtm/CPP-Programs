/*
Program Name: Constructor Example in Class

Definition:
A constructor is a special member function
of a class that is automatically called
when an object is created.

Characteristics of Constructor:
1. Name is same as class name.
2. No return type (not even void).
3. Used to initialize data members.
4. Automatically executes when object is created.

Types Used in this Program:
- Default Constructor
- Parameterized Constructor
*/

#include<iostream>
using namespace std;

class rectangle{

private:
    int length;
    int breadth;

public:

    // Default Constructor
    rectangle()
    {
        length = 0;
        breadth = 0;
        cout << "Default Constructor Called" << endl;
    }

    // Parameterized Constructor
    rectangle(int l, int b)
    {
        length = l;
        breadth = b;
        cout << "Parameterized Constructor Called" << endl;
    }

    int area()
    {
        return length * breadth;
    }

    int perimeter()
    {
        return 2 * (length + breadth);
    }
};

int main(){

    // Object using default constructor
    rectangle r1;

    cout << "Area of r1: " << r1.area() << endl;

    // Object using parameterized constructor
    rectangle r2(10, 5);

    cout << "Area of r2: " << r2.area() << endl;
    cout << "Perimeter of r2: " << r2.perimeter() << endl;

    return 0;
}