/*
Program Title: Reference Variable Demonstration

Definition:
A reference variable is an alias (another name) for an existing variable.
It does not create a new memory location; instead, it refers to the same
memory location as the original variable. Any change made through the
reference variable also affects the original variable.

Purpose:
This program demonstrates how a reference variable works and shows that
both the original variable and the reference variable share the same
memory address.
*/

#include<iostream>
using namespace std ;

int main(){

    int x = 10 ;          // Original variable
    int &y = x ;          // y is reference (alias) of x

    cout << "The value of x is : " << x << endl ;

    y++ ;                 // increments x as well
    cout << "The value of y after y++ is : " << y << endl ;

    x++;                  // increments same memory again
    cout << "The value of x after x++ is : " << x << endl ;

    // Printing addresses (both will be same)
    cout << "Address of y: " << &y << endl ;
    cout << "Address of x: " << &x << endl ;

    return 0 ;
}
