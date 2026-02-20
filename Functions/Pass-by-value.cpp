/*
Program Name: Swap Using Call by Value

Definition:
Call by Value is a method of passing arguments to a function
in which copies of actual parameters are passed.

Any changes made inside the function
do NOT affect the original (actual) variables.

Parameters:
1. Formal Parameters:
   Variables defined in function definition.
   Example: int a, int b

2. Actual Parameters:
   Variables passed during function call.
   Example: x, y

In this program:
x and y → Actual Parameters
a and b → Formal Parameters
*/

#include<iostream>
using namespace std;

// Function Definition
// a and b are formal parameters
void swapValue(int a, int b)
{
    cout << "Before swapping inside function: "
         << a << " and " << b << endl;

    int temp;      // Temporary variable
    temp = a;      // Store value of a
    a = b;         // Assign b to a
    b = temp;      // Assign temp to b

    cout << "After swapping inside function: "
         << a << " and " << b << endl;
}

int main(){

    int x = 10, y = 20;  // Actual parameters

    // Function Call
    swapValue(x, y);

    cout << "Actual values after function call: "
         << x << " and " << y << endl;

    return 0;
}
