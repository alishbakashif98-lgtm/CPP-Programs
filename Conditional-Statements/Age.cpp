

/*
Program Name: Age Discount Eligibility
Definition:
This program takes age as input from the user.
It checks whether the age is less than or equal to 12
or greater than or equal to 50.
If the condition is true, the user is eligible for discount;
otherwise, the user is not eligible.

Operator Used:
Logical OR Operator (||)
The OR operator is used to join two conditions.
If any one condition is true, the result becomes true.
*/

#include<iostream>          
using namespace std;      

int main(){

int age ;                  // Variable to store age

cout << "Enter age:";
cin >> age;                // Taking age input from user

// Using logical OR (||) operator
// If age is less than or equal to 12 OR age is greater than or equal to 50
if( age <= 12 || age >= 50 )    
           
cout << "Eligible for discount"; // Display message if condition is true
else 
cout << "Not eligible";          // Display message if condition is false

return 0;                  // End of program
}

