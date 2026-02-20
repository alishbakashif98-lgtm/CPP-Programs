/*
Program Name: Default Arguments Example

Definition:
Default arguments are values assigned to function parameters.
If the user does not provide a value while calling the function,
the default value is used automatically.

In this program:
Parameter c has default value = 0
*/

#include<iostream>
using namespace std;

// Function with default parameter
int sum(int a, int b, int c = 0)
{
    return a + b + c;
}

int main(){

    // Calling function with 2 arguments
    // c will take default value (0)
    cout << "The sum for first time is: "
         << sum(4, 5) << endl;

    // Calling function with 3 arguments
    // c will take value 10
    cout << "The sum for second time is: "
         << sum(4, 5, 10) << endl;

    return 0;
}
