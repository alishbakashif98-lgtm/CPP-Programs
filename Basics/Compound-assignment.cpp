/*
Program Name: Compound_assignment.cpp
Description: This program demonstrates the use of C++ compound 
             assignment operators (+=, -=, *=, /=, %=). 
             Compound assignment operators combine an arithmetic 
             operation with assignment, e.g., a += b is equivalent to a = a + b.
*/

#include <iostream>
using namespace std;

int main() {
    int a = 10;
    int b = 5;

    cout << "Initial values: a = " << a << ", b = " << b << endl;

    // Compound assignment operators
    a += b;  // Equivalent to a = a + b
    cout << "After a += b, a = " << a << endl;

    a -= b;  // Equivalent to a = a - b
    cout << "After a -= b, a = " << a << endl;

    a *= b;  // Equivalent to a = a * b
    cout << "After a *= b, a = " << a << endl;

    a /= b;  // Equivalent to a = a / b
    cout << "After a /= b, a = " << a << endl;

    a %= b;  // Equivalent to a = a % b
    cout << "After a %= b, a = " << a << endl;

    return 0;
}