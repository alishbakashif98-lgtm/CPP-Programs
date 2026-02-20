/*
Program Name: Swap Using Pointers (Call by Address)

Definition:
In Call by Address, the address of variables
is passed to the function.

The function receives pointer variables
that store the memory address of actual variables.

Changes made inside the function
directly affect the original variables.

Parameters:
Actual Parameters  → x and y
Formal Parameters  → *a and *b (pointer variables)
*/

#include<iostream>
using namespace std;

// Function Definition (Pointer Parameters)
void swapValue(int *a, int *b)
{
    int temp;

    temp = *a;   // Store value at address a
    *a = *b;     // Assign value of b to a
    *b = temp;   // Assign temp to b
}

int main(){

    int x = 10, y = 20;

    cout << "Values before swapping: "
         << x << " and " << y << endl;

    // Passing addresses of x and y
    swapValue(&x, &y);

    cout << "Values after swapping: "
         << x << " and " << y << endl;

    return 0;
}
