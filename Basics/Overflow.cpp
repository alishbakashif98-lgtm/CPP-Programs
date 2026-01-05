/*
Program Name: Overflow.cpp
Description: This program demonstrates the concept of overflow in C++.
             Overflow occurs when a variable exceeds the maximum limit
             that can be stored in its data type.
             In this example, an integer variable exceeds its maximum value
             and produces an unexpected result.
*/

#include <iostream>
#include <climits>   // For INT_MAX
using namespace std;

int main() {
    int num = INT_MAX;   // Maximum value an int can store

    cout << "Initial value of num: " << num << endl;

    // Overflow occurs here
    num++;

    cout << "Value of num after overflow: " << num << endl;

    return 0;
}
