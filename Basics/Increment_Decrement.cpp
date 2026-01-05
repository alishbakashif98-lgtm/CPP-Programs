/*
Program Name: increment_decrement.cpp
Description: This program demonstrates the use of C++ increment (++) 
             and decrement (--) operators. 
             - Increment operator (++) increases a variable's value by 1.
             - Decrement operator (--) decreases a variable's value by 1.
             These can be used in two ways: 
             1. Prefix (++a / --a): the value is changed before using it.
             2. Postfix (a++ / a--): the value is used first, then changed.
*/

#include <iostream>
using namespace std;

int main() {
    int x = 5;
    int y = 10;

    cout << "Initial values: x = " << x << ", y = " << y << endl;

    // Increment operators
    x++; // Postfix increment
    cout << "After x++: x = " << x << endl;

    ++x; // Prefix increment
    cout << "After ++x: x = " << x << endl;

    // Decrement operators
    y--; // Postfix decrement
    cout << "After y--: y = " << y << endl;

    --y; // Prefix decrement
    cout << "After --y: y = " << y << endl;

    return 0;
}
