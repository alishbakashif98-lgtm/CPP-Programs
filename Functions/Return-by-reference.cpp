/*
Program Name: Returning Reference from Function

Definition:
A function can return a reference variable.

When a reference is returned,
the function returns the actual variable itself,
not a copy.

Any modification made using the returned reference
directly changes the original variable.
*/

#include<iostream>
using namespace std ;

// Function returning reference
int &fun( int &a )
{
    // Print current value of a
    cout << " The value of a is " << a << endl;


    // Return reference of original variable
    return a ;
}

int main()
{
    int x = 10 ;

    // Function returns reference to x
    // So we can assign new value to it
    fun(x) = 25 ;

    cout << " The value of x is " << x;

    return 0 ;
}