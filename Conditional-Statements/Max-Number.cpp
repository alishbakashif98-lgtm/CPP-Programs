/*
Program: Maximum of Two Numbers
Definition: This program finds the maximum of two numbers provided by the user.
Input: Two integer numbers
Output: The maximum number
*/

#include<iostream>  // header file for input-output operations
using namespace std; // using standard namespace

int main() {

    int a, b; // variables to store two numbers

    // Input: user provides two numbers
    cout << "Enter two numbers: ";
    cin >> a >> b;

    // Processing & Output: determine and display the maximum number
    if(a > b)
        cout << "Maximum number is " << a;
    else
        cout << "Maximum number is " << b;

    return 0; // ends the program
}