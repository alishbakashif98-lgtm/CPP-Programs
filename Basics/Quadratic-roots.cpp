
/*
  Program Name: Quadratic Roots Calculator
  Description:
  This program calculates the roots of a quadratic equation of the form
  ax^2 + bx + c = 0 using the quadratic formula:
  
      root1 = (-b + sqrt(b^2 - 4ac)) / (2a)
      root2 = (-b - sqrt(b^2 - 4ac)) / (2a)

  Note: This version only works for real roots (discriminant >= 0).
*/

#include <iostream>  // For input/output operations
#include <cmath>     // For mathematical functions like sqrt()
using namespace std;

int main() {
    // Variable declaration
    float a, b, c;   // Coefficients of the quadratic equation
    float r, R;      // Variables to store the two roots

    // Input coefficients from the user
    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;
    cout << "Enter c: ";
    cin >> c;

    // Calculate roots using quadratic formula
    r = (-b + sqrt(b*b - 4*a*c)) / (2*a);
    R = (-b - sqrt(b*b - 4*a*c)) / (2*a);

    // Display the results
    cout<<"The roots are: "<<r<<" and "<<R;

    return 0;  // End of program
}