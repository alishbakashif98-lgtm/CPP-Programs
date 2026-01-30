/*
Program Name: Simple Calculator using Switch Statement

Program Definition:
This program is a simple calculator that performs basic arithmetic
operations like addition, subtraction, multiplication, and division.
The user selects an option from the menu and enters two numbers.
The selected operation is performed using a switch statement.

Switch Statement Definition:
A switch statement is a selection control structure that allows
a program to execute different blocks of code based on the value
of a variable or expression.
*/

#include<iostream>   // Header file for input and output
using namespace std; // Standard namespace

int main(){

    // Displaying menu
    cout << "Menu" << endl;

    cout << " 1. Add " << endl;
    cout << " 2. Subtract " << endl;
    cout << " 3. Multiply " << endl;
    cout << " 4. Divide " << endl;

    int option;   // Stores user choice

    // Taking choice from user
    cout << "Enter your choice : " ;
    cin >> option;

    int a , b , c;  // a and b are input numbers, c stores result

    // Taking two numbers from user
    cout << "Enter two numbers : " ;
    cin >> a >> b;

    // Switch statement to perform selected operation
    switch(option)
    {
        case 1: c = a + b;   // Addition
                break;

        case 2: c = a - b;   // Subtraction
                break;

        case 3: c = a * b;   // Multiplication
                break;

        case 4: c = a / b;   // Division
                break;
    }

    // Display result
    cout << "The result is : "<< c ;

    return 0;  // End of program
}
