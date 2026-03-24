/*
Program Name: Preprocessor Macro in C++

Definition:
A preprocessor directive is a command that is processed before
the compilation of the program. Macros are used to define reusable
code using #define.

Description:
- A macro is defined to find the maximum of two numbers.
- The macro replaces the code before compilation.
*/

#include<iostream>
using namespace std;

// Macro to find maximum of two numbers
#define max(x,y) (x>y?x:y)

int main()
{
    // Using macro
    cout << "Maximum value is " << max(10, 12);

    return 0;
}