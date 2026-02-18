/*
Program Name: Addition Using Function

Definition:
A function is a block of code that performs a specific task.
Here we create a function 'add' that takes two float numbers
as parameters and returns their sum.

Syntax:
return_type function_name(parameters)
*/

#include<iostream>
using namespace std;

// Function definition
float add(float x, float y)
{
    float z;
    z = x + y;   // Add two numbers
    return z;    // Return result
}

int main(){

    float a, b, c;

    // Take input from user
    cout << "Enter first number: ";
    cin >> a;

    cout << "Enter second number: ";
    cin >> b;

    // Function call
    c = add(a, b);

    // Display result
    cout << "Addition of two numbers is: " << c;

    return 0;
}
