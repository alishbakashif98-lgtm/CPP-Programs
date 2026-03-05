/*
Program Name: Addition of Complex Numbers using Operator Overloading

Definition:
A complex number is a number that has two parts:
1. Real part
2. Imaginary part

Operator Overloading:
Operator overloading is a feature in C++ that allows operators 
(like +, -, *, etc.) to work with user-defined objects.

In this program, the + operator is overloaded to add two Complex objects.

Description:
- A class named "Complex" is created.
- It stores real and imaginary parts of a complex number.
- A friend function is used to overload the + operator.
- The overloaded operator adds two complex numbers and returns the result.
- The Display() function prints the complex number in the form: a + ib
*/

#include<iostream>
using namespace std;

// Class definition for Complex numbers
class Complex{

private:
    int real;   // Stores real part of complex number
    int img;    // Stores imaginary part of complex number

public:

    // Constructor with default values
    // It initializes real and imaginary parts
    Complex(int r = 0 , int i = 0)
    {
        real = r;
        img = i;
    }

    // Function to display complex number
    void Display()
    {
        cout << real << " + i" << img;
    }

    // Friend function declaration for operator overloading
    friend Complex operator+(Complex c1 , Complex c2);
};

/*
Function Name: operator+

Definition:
This function overloads the + operator to add two Complex objects.

Description:
- It receives two Complex objects as parameters.
- Their real parts are added together.
- Their imaginary parts are added together.
- The result is stored in a temporary object and returned.
*/

Complex operator+(Complex c1 , Complex c2)
{
    Complex temp; // Temporary object to store result

    temp.real = c1.real + c2.real; // Add real parts
    temp.img  = c1.img  + c2.img;  // Add imaginary parts

    return temp; // Return result
}

// Main function (Program execution starts here)
int main(){

    // Creating objects of class Complex
    Complex c1(3,5) , c2(6,12) , c3;

    // Using overloaded + operator
    c3 = c1 + c2;

    // Display result
    c3.Display();

    return 0;
}