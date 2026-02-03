/*
Program Name: Multiplication Table
Definition:
This program takes a number from the user and displays
its multiplication table from 1 to 10 using a for loop.

For Loop Definition:
A for loop is used when we know in advance how many times
the loop should run. It has three parts:
1. Initialization   → starting value
2. Condition        → loop runs while this condition is true
3. Increment        → updates the loop variable
*/

#include <iostream>   // header file for input and output
using namespace std;  // using standard namespace

int main() {

    int n;  // variable to store the number entered by the user

    // asking user to enter a number
    cout << "Enter a number : ";
    cin >> n;   // storing user input in variable n

    // displaying message before printing table
    cout << "The table of " << n << " is given below :" << endl;

    // for loop to print table from 1 to 10
    for (int i = 1; i <= 10; i++) {

        // printing multiplication table
        cout << n << " * " << i << " = " << n * i << endl;
    }

    return 0;  // program ends successfully
}
