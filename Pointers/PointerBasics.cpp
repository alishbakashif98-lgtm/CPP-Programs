/*
Program: Pointer Example
Definition:
This program demonstrates the use of pointers.
It shows how to store the address of a variable
and access its value using a pointer.
*/

#include<iostream>
using namespace std;

int main(){

    int a = 10;        // normal integer variable
    int *p = &a;       // pointer storing address of variable a

    cout << "Value of a: " << a << endl;        // prints value of a
    cout << "Address of a: " << &a << endl;     // prints address of a
    cout << "Value of p: " << p << endl;        // prints address stored in p
    cout << "Value at p (*p): " << *p << endl;  // prints value at that address
    cout << "Address of p: " << &p << endl;  // prints value at that address

    return 0;
}
