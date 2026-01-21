/*
Program Name: enum_Day.cpp
Description: This program demonstrates the use of enum (Enumeration) in C++.
             - enum is a user-defined data type.
             - It is used to assign names to integral constant values.
             - By default, enum values start from 0.
             Example:
             Monday = 0
             Tuesday = 1
             Wednesday = 2
             Thursday = 3
             Friday = 4
*/

#include <iostream>
using namespace std;

// Declaring an enum named Day
enum Day { Monday, Tuesday, Wednesday, Thursday, Friday };

int main() {

    // Declaring a variable of enum type
    Day d = Wednesday;

    // Printing the value of enum variable
    // It will print 2 because Wednesday = 2
    cout << "Value of d (Wednesday): " << d << endl;

    return 0; // Program ends successfully
}
