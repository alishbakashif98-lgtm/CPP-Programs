/*
Program Name: Use of Ellipsis in C++

Definition:
Ellipsis (...) is used to accept a variable number of arguments in a function.

Description:
- This program uses ellipsis to take multiple integers.
- It calculates the sum of given numbers using variable arguments.
*/

#include<iostream>
#include<cstdarg>   // Required for ellipsis
using namespace std;

// Function with variable arguments
int sum(int count, ...)
{
    va_list args;
    va_start(args, count);

    int total = 0;

    for(int i = 0; i < count; i++)
    {
        total += va_arg(args, int); // Get next argument
    }

    va_end(args);

    return total;
}

int main()
{
    cout << "Sum is: " << sum(4, 10, 20, 30, 40);

    return 0;
}