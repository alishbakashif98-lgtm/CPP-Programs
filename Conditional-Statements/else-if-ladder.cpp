/*
Program Name: Day Name Finder
Definition:
This program takes a day number from the user.
According to the entered number, it displays the name of the day.

Else-if Ladder Definition:
An else-if ladder is used to check multiple conditions one by one.
If the first condition is false, the next else-if condition is checked.
This process continues until a true condition is found.
If all conditions are false, the else part is executed.
*/

#include<iostream>          // Header file for input and output
using namespace std;       

int main(){

int day ;                  // Variable to store day number

cout<< "Enter the day number : ";

cin >> day ;               // Taking day number input


// Using else-if ladder to match day number
if (day==1)

cout<< "The day is Monday";


else if (day==2)

cout<< "The day is Tuesday";


else if (day==3)

cout<< "The day is Wednesday";


else if (day==4)

cout<< "The day is Thursday";


else if (day==5)

cout<< "The day is Friday";


else if (day==6)

cout<< "The day is Saturday";


else                       // Executes if none of the above conditions are true

cout<< "The day is Sunday";

return 0;                  // End of program
}
