/*
Program Name: Exception Handling (Division by Zero) in C++

Definition:
Exception handling is a mechanism in C++ used to handle runtime errors.
It uses try, throw, and catch blocks to detect and manage errors so that
the program does not crash.

Description:
- The program tries to divide two numbers.
- If the denominator becomes zero, an exception is thrown.
- The catch block handles the exception and displays an error message.
*/

#include<iostream>
using namespace std;

int main()
{
    int x = 10, y = 0, z;

    try
    {
        // Checking division by zero
        if (y == 0)
            throw 1;

        z = x / y;
        cout << "Answer is " << z;
    }

    // Catch block to handle exception
    catch(int e)
    {
        cout << "Division by zero";
    }

    return 0;
}