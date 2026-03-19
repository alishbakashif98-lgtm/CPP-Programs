/*
Program Name: Exception Handling using Function in C++

Definition:
Exception handling in C++ is used to handle runtime errors using
try, throw, and catch blocks. It prevents the program from crashing
by handling errors gracefully.

Description:
- A function division() is created to divide two numbers.
- If the denominator is zero, an exception is thrown.
- The main() function calls division() inside a try block.
- If an exception occurs, it is handled in the catch block.
*/

#include<iostream>
using namespace std;

// Function to perform division
int division(int x, int y)
{
    // Check for division by zero
    if (y == 0)
        throw 1;

    return x / y;
}

int main()
{
    int a = 10, b = 2, z;

    try
    {
        // Calling division function
        z = division(a, b);

        cout << "Answer is " << z;
    }

    // Catch block to handle exception
    catch(int e)
    {
        cout << "Division by zero";
    }

    return 0;
}