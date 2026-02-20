/*
Program Name: Swap Using Call by Reference

Definition:
In Call by Reference, reference variables are used
to refer to the original variables.

No copy is made.
The function directly works on the original variables.

Changes made inside the function
affect the actual variables.

Parameters:
Actual Parameters  → x and y
Formal Parameters  → int &a, int &b
(& means reference)
*/

#include<iostream>
using namespace std;

// Function Definition (Reference Parameters)
void swapValue(int &a, int &b)
{
    int temp;

    temp = a;   // Store value of a
    a = b;      // Assign b to a
    b = temp;   // Assign temp to b
}

int main(){

    int x = 10, y = 20;

    cout << "Values before swapping: "
         << x << " and " << y << endl;

    // Passing variables directly (no & needed here)
    swapValue(x, y);

    cout << "Values after swapping: "
         << x << " and " << y << endl;

    return 0;
}
