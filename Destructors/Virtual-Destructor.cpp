/*
Program Name: Virtual Destructor in C++

Definition:
A virtual destructor ensures that the correct destructor is called
when a base class pointer points to a derived class object. It is
used to achieve proper cleanup in inheritance.

Description:
- A base class Base has a virtual destructor.
- A derived class Derived overrides the destructor.
- When the object is destroyed, both destructors are called in order.
*/

#include<iostream>
using namespace std;

// Base class
class Base{
public:
    // Virtual Destructor
    virtual ~Base(){
        cout << "Destructor of Base" << endl;
    }
};

// Derived class
class Derived : public Base
{
public:
    // Destructor of derived class
    ~Derived(){
        cout << "Destructor of Derived" << endl;
    }
};

int main(){

    // Object of Derived class
    Derived d;

    return 0;
}