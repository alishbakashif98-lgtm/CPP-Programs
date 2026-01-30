/*
Program Name: Leap Year Checker

Program Definition:
This program checks whether a given year is a leap year or not.
A year is called a leap year if:
- It is divisible by 400
OR
- It is divisible by 4 but not divisible by 100

If-Else Statement Definition:
An if-else statement is a conditional statement that allows
a program to make decisions and execute different code blocks
based on true or false conditions.
*/

#include<iostream>          // Header file for input and output
using namespace std;       // Allows use of standard namespace

int main(){

    int year;   // Variable to store year

    // Taking year from user
    cout << "Enter a year : ";
    cin >> year;

    // Checking leap year conditions using if-else
    if ( (year % 400 == 0) || (year % 4 == 0 && year % 100 != 0) )
        cout << year << " is a Leap Year.";

    else
        cout << year << " is not a Leap Year.";

    return 0;   // Program ends successfully
}
