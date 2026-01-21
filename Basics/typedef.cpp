/*
Program Name: typedef.cpp
Description: This program demonstrates the use of typedef in C++.
             - typedef is a keyword used to create an alias (new name)
               for an existing data type.
             - It helps in making the code more readable and simple.
             Example:
             typedef int marks;
             Here, 'marks' becomes another name for 'int'.
*/

#include <iostream>
using namespace std;

// Creating an alias 'marks' for int data type
typedef int marks;

int main() {

    // Declaring a variable using typedef alias
    marks m = 85;

    // Printing the value of m
    cout << "The marks are: " << m;

    return 0; // Program ends successfully
}
