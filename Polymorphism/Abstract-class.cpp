/*
Program Name: Abstract Class using Pointer in C++

Definition:
An Abstract Class is a class that contains at least one Pure Virtual Function.
It cannot be instantiated (we cannot create its object). Abstract classes are
used as base classes and are accessed using base class pointers or references.

Description:
- A base class Shape is created with a pure virtual function Area().
- A derived class Rectangle inherits from Shape.
- Rectangle overrides the Area() function.
- A pointer of base class Shape is used to access the derived class object.
*/

#include<iostream>
using namespace std;

// Abstract Base Class
class Shape{

public:

    // Pure Virtual Function
    virtual void Area() = 0;

};

// Derived Class
class Rectangle : public Shape{

public:

    // Overriding the pure virtual function
    void Area(){
        cout << "Area of Rectangle";
    }

};

int main(){

    // Base class pointer
    Shape *s;

    // Object of derived class
    Rectangle r;

    // Pointer pointing to derived object
    s = &r;

    // Calling function using pointer
    s->Area();

    return 0;
}