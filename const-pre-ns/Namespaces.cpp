/*
Program Name: Namespaces in C++

Definition:
A namespace in C++ is used to organize code and avoid name conflicts.
It allows different parts of a program to use the same function names.

Description:
- Two namespaces First and Second are created.
- Both contain a function with the same name fun().
- Functions are called using scope resolution operator (::).
*/

#include<iostream>
using namespace std;

// First namespace
namespace First
{
    void fun(){
        cout << "First namespace" << endl;
    }
}

// Second namespace
namespace Second
{
    void fun(){
        cout << "Second namespace" << endl;
    }
}

int main()
{
    // Calling functions using namespace
    First::fun();
    Second::fun();

    return 0;
}