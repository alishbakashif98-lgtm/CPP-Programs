#include<iostream>
using namespace std;

/*
Program Name: Addition of Complex Numbers Using Class

Definition:
A complex number has two parts:
1. Real part
2. Imaginary part

Example:
5 + 10i
Where:
5  → Real part
10 → Imaginary part

In this program:
- A class "Complex" is created to represent complex numbers.
- The class contains two data members:
  real → stores the real part
  img  → stores the imaginary part
- A member function "add()" is used to add two complex numbers.
*/

class Complex{

public:

// Data Members
int real;   // stores real part of complex number
int img;    // stores imaginary part of complex number


/*
Function Name: add()

Description:
This function adds two complex numbers.

Working:
- It receives a complex object as parameter.
- Adds real parts separately.
- Adds imaginary parts separately.
- Stores result in a temporary object.
- Returns the result.
*/

Complex add(Complex x)
{

Complex temp;   // temporary object to store result

// Adding real parts
temp.real = real + x.real;

// Adding imaginary parts
temp.img = img + x.img;

return temp;    // returning result

}

};


int main(){

// Creating three objects of Complex class
Complex c1 , c2 , c3 ;

/*
Assigning values to first complex number
c1 = 5 + 10i
*/
c1.real = 5;
c1.img = 10;


/*
Assigning values to second complex number
c2 = 12 + 2i
*/
c2.real = 12;
c2.img = 2;


// Calling add() function to add c1 and c2
c3 = c1.add(c2);


// Displaying result
cout << c3.real << " + i" << c3.img ;

return 0;

}