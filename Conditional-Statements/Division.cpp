/*
Program Name: Division of Two Numbers
Definition:
This program takes two integers from the user.
It divides the first number by the second number.
If the second number is zero, it displays an error message
to avoid division by zero.
*/

#include<iostream>          // Header file for input and output
using namespace std;       // Using standard namespace

int main(){

int a , b , c;             // Variable declaration

cout << "Enter first number: ";
cin >> a;                  // Input first number

cout << "Enter second number: ";
cin >> b;                  // Input second number

if( b == 0 )               // Check if divisor is zero
cout << "Division by zero"; // Error message
else 
{
  c = a/ b;                // Perform division
  cout << c << endl ;      // Display result
}

return 0;                  // End of program
}
