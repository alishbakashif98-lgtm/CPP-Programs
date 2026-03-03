/*
Program Name: Inline Function Defined Outside Class

Definition:
An inline function is a function whose code
is expanded at the place where it is called.

The 'inline' keyword suggests the compiler
to replace the function call with actual function code
to reduce function call overhead.

In this program:
- Function is declared inside class.
- Defined outside class using scope resolution (::).
- Defined as inline.
*/

#include<iostream>
using namespace std;

class calculator{

private:
    int a, b;

public:
    void setValues(int x, int y);   // Function declaration
    int add();                      // Function declaration
};

// Function definition outside class using inline
inline void calculator::setValues(int x, int y)
{
    a = x;
    b = y;
}

// Inline function defined outside class
inline int calculator::add()
{
    return a + b;
}

int main(){

    calculator c;

    c.setValues(10, 20);

    cout << "Sum is " << c.add();

    return 0;
}