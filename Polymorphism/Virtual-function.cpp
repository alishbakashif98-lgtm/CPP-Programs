/*
Program Name: Virtual Function in C++

Definition:
A Virtual Function is a member function of a class that is declared
using the keyword "virtual" in the base class and is redefined in the
derived class. It is used to achieve Runtime Polymorphism.

Description:
- A Base class is created with a virtual function Display().
- A Derived class inherits from the Base class.
- The Derived class overrides the Display() function.
- A pointer of Base class is used to call the function.
- The pointer points to the object of Derived class.
- Because the function is virtual, the Derived class function is called
  at runtime instead of the Base class function.
*/

#include<iostream>
using namespace std;

// Base class
class Base{

    public:

    // Virtual function
    virtual void Display(){
        cout << "Display of Base class";
    }

};

// Derived class
class Derived : public Base{

    public:

    // Overriding the virtual function
    void Display(){
        cout << "Display of Derived class";
    }

};

int main(){

    // Base class pointer
    Base *b;

    // Creating object of Derived class
    Derived d;

    // Base pointer pointing to Derived object
    b = &d;

    // Calling virtual function
    // Derived class function will execute
    b->Display();

    return 0;
}