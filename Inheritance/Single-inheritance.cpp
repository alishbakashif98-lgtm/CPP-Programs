/*
Program Name: Single Inheritance Demonstration

Description:
This program demonstrates the concept of Single Inheritance in C++.
A Derived class inherits the properties and behaviors of the Base class.
The object of the Derived class can access both the Base class function
and its own function.

Definition:
Inheritance is an Object Oriented Programming concept in which one class
(derived class) acquires the properties and behaviors of another class
(base class). It helps in code reusability and creating hierarchical relationships
between classes.
*/

#include<iostream>
using namespace std ;

// Base class
class Base{

public:

// Function of Base class
void show ()
{
    cout << "Base class created" << endl ;
}
};

// Derived class inheriting Base class
class Derived : public Base{

public:

// Function of Derived class
void display ()
{
    cout << "Derived class created" << endl ;
}
};


int main(){
    
    // Creating object of Derived class
    Derived d;

    // Calling Base class function
    d.show();

    // Calling Derived class function
    d.display();

    return 0 ;
}