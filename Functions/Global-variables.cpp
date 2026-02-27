/*
Program Name: Global Variable Demonstration

Definition:
A global variable is a variable that is declared outside
all functions (usually at the top of the program).

Characteristics of Global Variables:

1. Scope:
   It can be accessed and modified by any function
   inside the program.

2. Lifetime:
   It exists for the entire duration of the program.
   It is created when program starts
   and destroyed when program ends.

3. Memory:
   Stored in global/static memory area.

4. Default Value:
   If not initialized, it is automatically initialized to 0.

Note:
Global variables should be used carefully because
any function can modify them.
*/

#include<iostream>
using namespace std;

// Global Variable
int g = 5;

// Function 1: Increment global variable
void increment()
{
    g++;
    cout << "Value after increment: " << g << endl;
}

// Function 2: Decrement global variable
void decrement()
{
    g--;
    cout << "Value after decrement: " << g << endl;
}

int main(){

    cout << "Initial value of global variable: " << g << endl;

    increment();   // Modify global variable
    decrement();   // Modify global variable again

    cout << "Final value of global variable: " << g << endl;

    return 0;
}