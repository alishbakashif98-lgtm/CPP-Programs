/*
Program Name: Day Name Using Switch
Definition:
This program takes a day number from the user
and displays the corresponding day name using
the switch statement.

Switch Statement Definition:
A switch statement is used to select one option
from many choices based on the value of a variable.
Each case is checked, and when a match is found,
that block of code is executed.
*/

#include<iostream>          // Header file for input and output
using namespace std;       

int main(){

int day ;                  // Variable to store day number

cout<< "Enter the day number : ";

cin >> day ;               // Taking input from user

switch(day)                // Switch statement starts
{
case 1: cout<<"Monday";    // Case for day 1
break;

case 2: cout<<"Tuesday";   // Case for day 2
break;

case 3: cout<<"Wednesday"; // Case for day 3
break;

case 4: cout<<"Thursday";  // Case for day 4
break;

case 5: cout<<"Friday";    // Case for day 5
break;

case 6: cout<<"Saturday";  // Case for day 6
break;

case 7: cout<<"Sunday";    // Case for day 7
break;

default:                   // Executes if no case matches
cout<<"Invalid day";
break;
}

return 0;                  // End of program
}
