/*
Program Name: Use of auto Keyword in C++

Definition:
The 'auto' keyword in C++ is used to automatically detect the data type of a variable
at compile time based on the assigned value.

Description:
- In this program, an integer (x) and a float (y) are added.
- The result is stored in a variable 'z' using the 'auto' keyword.
- The compiler automatically determines the correct data type of 'z'.
*/

#include<iostream>
using namespace std;

int main()
{
    int x = 2;      // Integer variable
    float y = 2.3;  // Floating point variable

    auto z = x + y; // 'auto' automatically assigns the correct type (float)
    cout << z << " is the answer";
    return 0;
}