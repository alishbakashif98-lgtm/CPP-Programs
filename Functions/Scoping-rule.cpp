/*
Program Name: Scope Demonstration (Global, Local, and Block Scope)

Definition:
In C++, variables can have different scopes:
1. Global Scope:
   - Declared outside all functions.
   - Accessible by all functions.
   - Lifetime: whole program.
   - Stored in global memory.
   - Default value: 0 if not initialized.

2. Local Scope:
   - Declared inside a function.
   - Only accessible inside that function.
   - Destroyed when function ends.

3. Block Scope:
   - Declared inside a block { }.
   - Exists only within that block.
   - Cannot be accessed outside it.

Note:
If a local variable has the same name as a global variable,
the local one gets priority (variable shadowing).
To access the global variable, use the scope resolution operator (::).
*/

#include<iostream>
using namespace std;

// Global Variable
int x = 10;  // This variable is accessible throughout the program

int main() {

    // Local variable of main()
    int x = 20;  // This hides the global variable inside main()

    {
        // Block scope variable
        int x = 30;  // This hides both global and local inside this block
        cout << "First output " << x << endl;  // Prints 30 (block scope variable)
    }

    cout << "Second output " << x << endl;   // Prints 20 (local variable of main)
    cout << "Third output " << ::x << endl;  // Prints 10 (global variable)

    return 0;
}