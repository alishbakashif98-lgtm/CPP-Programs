/*
Program Name: Grade Calculation
Definition:
This program takes marks of three subjects from the user.
It calculates the total and average marks.
Based on the average, it assigns grades:
A for average 80 or above,
B for average 60 or above,
and C for average below 60.
*/

#include<iostream>          // Header file for input and output
using namespace std;       

int main(){

int m1 , m2 , m3 , Total , Avg ;   // Variables for marks, total and average

cout<< "Enter marks of 3 subjects : ";

cin >> m1 >> m2 >> m3 ;              // Taking marks input from user

Total = m1+m2+m3;                  // Calculate total marks
Avg = (m1+m2+m3)/3;                // Calculate average marks

if (Avg >= 80)                     // Check for Grade A

cout<< "Grade is A";

else if (Avg >= 60 )               // Check for Grade B

cout<< "Grade is B";

else                               // Otherwise Grade C

cout<< "Grade is C";

return 0;                          // End of program
}
