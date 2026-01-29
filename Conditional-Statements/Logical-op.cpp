/*
Program Name: Working Hours Check
Definition:
This program takes the number of hours from the user.
It checks whether the given time lies between 9 and 18.
If the time is within this range, it shows "Working hours",
otherwise it displays "Leisure time".
*/

#include<iostream>          // Header file for input and output
using namespace std;       // Using standard namespace

int main(){

int hour;                  // Variable to store hour input

cout << "Enter hours :";
cin >> hour;               // Taking hour from user

if( hour >= 9 && hour <= 18 )    // Check working hours condition
           
cout << "Working hours";         // Display working hours
else 
cout << "Leisure time";          // Display leisure time

return 0;                   // End of program
}

