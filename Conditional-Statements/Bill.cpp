/*
Program Name: Bill Discount Calculator

Program Definition:
This program calculates the discount on a bill amount.
The user enters the bill amount and the program applies
a discount based on given conditions using if-else statement.
After calculating the discount, the program displays the
original bill amount, discount, and final bill after discount.

If-Else Statement Definition:
An if-else statement is a decision-making (conditional)
statement that allows a program to execute different blocks
of code based on whether a given condition is true or false.
*/

#include<iostream>          // Header file for input and output operations
using namespace std;       // Allows use of standard namespace

int main(){

    float billAmount;      // Variable to store bill amount
    float Discount = 0;    // Variable to store discount (initialized)

    // Taking bill amount from user
    cout << "Enter your bill amount : ";
    cin >> billAmount;

    // Applying discount using if-else conditions
    if ( billAmount >= 500 )
        Discount = billAmount * 0.20;   // 20% discount

    else if ( billAmount >= 100 && billAmount < 500 )
        Discount = billAmount * 0.10;   // 10% discount

    else
        Discount = 0;   // No discount if bill is less than 100

    // Displaying results
    cout << "Your bill amount is : " << billAmount << endl;
    cout << "Discount is : " << Discount << endl;
    cout << "Bill amount after discount is : "
         << billAmount - Discount << endl;

    return 0;   // Program ends 
}
