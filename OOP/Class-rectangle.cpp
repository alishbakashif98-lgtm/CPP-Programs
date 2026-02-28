/*
Program Name: Rectangle Class Example

Definition:
A class is a user-defined data type in C++.
It is used to combine data members (variables)
and member functions (functions) into a single unit.

In Object-Oriented Programming (OOP):

1. Class:
   Blueprint or template for creating objects.

2. Object:
   Instance of a class.

3. Data Members:
   Variables defined inside class.

4. Member Functions:
   Functions defined inside class
   that operate on data members.

In this program:
rectangle → class
r1        → object
length and breadth → data members
area() and perimeter() → member functions
*/

#include<iostream>
using namespace std;

class rectangle{

public:

    // Data Members
    int length;
    int breadth;

    // Member Function to calculate area
    int area(){
        return length * breadth;
    }

    // Member Function to calculate perimeter
    int perimeter(){
        return 2 * (length + breadth);
    }

};

int main(){

    // Creating object of class rectangle
    rectangle r1;

    // Assigning values to data members
    r1.length = 5;
    r1.breadth = 10;

    // Calling member functions using object
    cout << "Area of rectangle is "
         << r1.area() << endl;

    cout << "Perimeter of rectangle is "
         << r1.perimeter() << endl;

    return 0;
}