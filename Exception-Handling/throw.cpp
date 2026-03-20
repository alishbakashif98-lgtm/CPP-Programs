/*
Program Name: Demonstration of Throw in C++

Definition:
The 'throw' keyword in C++ is used to generate exceptions.
It is used to signal that an error has occurred. The control
is transferred to the catch block to handle the error.

Description:
- Different types of exceptions are thrown (int, double).
- A function is used to demonstrate throw.
- Multiple conditions are checked.
*/

#include<iostream>
using namespace std;

// Function demonstrating throw
void checkNumber(int n)
{
    if(n == 0)
        throw 1;        // int exception
    else if(n < 0)
        throw 2.5;      // double exception
    else
        cout << "Number is positive" << endl;
}

int main()
{
    int num;

    cout << "Enter a number: ";
    cin >> num;

    try
    {
        // Calling function
        checkNumber(num);
    }

    // Catch block for int
    catch(int e)
    {
        cout << "Exception: Number is zero" << endl;
    }

    // Catch block for double
    catch(double d)
    {
        cout << "Exception: Number is negative" << endl;
    }

    return 0;
}