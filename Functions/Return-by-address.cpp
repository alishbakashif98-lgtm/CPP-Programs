/*
Program Name: Returning Pointer from Function

Definition:
This program demonstrates how a function can return
a pointer to dynamically allocated memory.

Memory is created using 'new' inside the function.
Since it is allocated in heap memory,
it remains available even after the function ends.
*/

#include<iostream>
using namespace std ;

int *fun( )
{
    // Dynamically allocate array of 5 integers
    int *p = new int[5] ;

    // Assign values to array
    for ( int i = 0 ; i < 5 ; i++ )
    {
        p[i] = 5 * i ;
    }

    // Return base address of array
    return p ;
}

int main (){

    // Receive returned pointer
    int *q = fun() ;

    // Print array elements
    for ( int i = 0 ; i < 5 ; i++ )
    {
        cout << q[i] << endl ;
    }

    return 0 ;
}