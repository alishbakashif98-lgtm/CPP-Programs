/*
Program Name: Demonstration of Access Specifiers in C++

Definition:
Access specifiers control the accessibility of class members.
The main access specifiers in C++ are:
1. Private   – Accessible only within the class.
2. Public    – Accessible from outside the class through objects.
3. Protected – Accessible within the class and derived classes.

Description:
This program demonstrates the concept of encapsulation using access specifiers.
The data members length and breadth are declared as private so they cannot be
accessed directly from outside the class. Public member functions (setters and
getters) are used to safely modify and access these values. The program also
calculates the area of a rectangle using these private variables.
*/

#include<iostream>
using namespace std;

class Rectangle{

private:
    int length;   // private data member (cannot be accessed directly outside class)
    int breadth;  // private data member

public:

    // function to set length value
    void setlength(int l)
    {
        if (l > 0)
            length = l;
        else
            length = 1;
    }

    // function to set breadth value
    void setbreadth(int b)
    {
        if (b > 0)
            breadth = b;
        else
            breadth = 1;
    }

    // function to get length value
    int getlength()
    {
        return length;
    }

    // function to get breadth value
    int getbreadth()
    {
        return breadth;
    }

    // function to calculate area of rectangle
    int area()
    {
        return length * breadth;
    }

};

int main(){

    Rectangle r;   // object of Rectangle class
    
    r.setlength(10);   // setting length
    r.setbreadth(5);   // setting breadth

    cout << "Length is " << r.getlength() << endl;
    cout << "Breadth is " << r.getbreadth() << endl;
    cout << "Area is " << r.area() << endl;

    return 0;
}