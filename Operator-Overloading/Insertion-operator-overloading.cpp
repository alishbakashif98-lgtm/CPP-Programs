/*
Program Name: Insertion Operator Overloading

Description:
This program demonstrates how to overload the insertion operator (<<)
so that objects of a class can be displayed directly using cout.

Definition:
Operator Overloading is a feature of C++ that allows operators
to work with user-defined data types (objects).
The insertion operator (<<) is normally used with cout to display output.
By overloading it, we can print objects directly using cout.

Example:
cout << object;
*/

#include<iostream>
using namespace std;

// Creating a class
class Complex
{
private:
    int real;
    int imag;

public:

    // Constructor to initialize values
    Complex(int r=0, int i=0)
    {
        real = r;
        imag = i;
    }

    // Friend function declaration for operator overloading
    friend ostream& operator<<(ostream &out, Complex c);
};

// Definition of overloaded insertion operator
ostream& operator<<(ostream &out, Complex c)
{
    out << c.real << " + i" << c.imag;
    return out;
}

int main()
{
    // Creating objects
    Complex c1(5,3);
    Complex c2(7,2);

    // Displaying objects using overloaded operator
    cout << c1 << endl;
    cout << c2 << endl;

    return 0;
}