/*
Program Name: Destructor in C++

Definition:
A destructor is a special member function of a class that is automatically
called when an object is destroyed. It is used to release resources.

Description:
- A class Demo is created.
- Constructor is called when object is created.
- Destructor is called automatically when object goes out of scope.
*/

#include<iostream>
using namespace std;

class Demo
{
public:
    // Constructor
    Demo()
    {
        cout << "Constructor called" << endl;
    }

    // Destructor
    ~Demo()
    {
        cout << "Destructor called" << endl;
    }
};

int main()
{
    Demo d1;   // Object created

    cout << "Inside main function" << endl;

    return 0;
}