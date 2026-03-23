/*
Program Name: Function Template in C++

Definition:
A template in C++ allows us to write generic code that works
with different data types without rewriting the same function.

Description:
- A function template is created to add two values.
- It works with different data types like int, float, etc.
*/

#include<iostream>
using namespace std;

// Function Template
template <class T>
T add(T a, T b)
{
    return a + b;
}

int main()
{
    // Using template with int
    cout << "Sum (int): " << add(2, 3) << endl;

    // Using template with float
    cout << "Sum (float): " << add(2.5, 3.5) << endl;

    return 0;
}