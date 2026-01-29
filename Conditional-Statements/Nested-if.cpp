/*
Program Name: Largest of Three Numbers
Definition:
This program takes three numbers as input from the user
and finds the largest number among them.

Nested if Definition:
A nested if statement means an if statement inside another if statement.
It is used to check multiple conditions step by step.
The inner if runs only when the outer if condition is true.
*/

#include<iostream>          
using namespace std;      

int main(){

int a , b , c ;                  // Variables to store three numbers

cout << "Enter three numbers : ";
cin >> a >> b >> c ;             // Taking input from user

// Checking conditions using if-else
// Here the logic works like nested decision making
if( a > b && a > c )             // First condition check
           
cout << "Maximum number is " <<a ;                      // Print 'a' if it is the largest
else if ( b > c)                 // Second condition check (nested decision)
cout << "Maximum number is " <<b ;                      // Print 'b' if it is the largest
else
cout << "Maximum number is " <<c ;                      // Otherwise print 'c'

return 0;                        // End of program
}
