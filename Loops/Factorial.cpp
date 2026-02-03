/*
Program Name: Factorial of a Number (Using For Loop)

Definition:
This program takes a number from the user and calculates
the factorial of that number using a for loop.

Factorial Definition:
Factorial of a number n is the product of all positive
integers from 1 to n.
Example: 4! = 4 × 3 × 2 × 1 = 24

For Loop Definition:
A for loop is used when the number of iterations is
known in advance. It consists of three parts:
1. Initialization → starting value of loop variable
2. Condition      → loop runs while this condition is true
3. Increment      → updates the loop variable
*/

#include <iostream>   // header file for input and output
using namespace std;  // using standard namespace

int main() {

    int n, fact = 1;
    // n    → number entered by user
    // fact → stores factorial result

    // asking user to enter a number
    cout << "Enter a number : ";
    cin >> n;   // storing input in n

    // for loop to calculate factorial
    for (int i = 1; i <= n; i++) {

        fact *= i;   // multiplying fact with i
    }

    // displaying the factorial
    cout << "The factorial of " << n << " is : " << fact;

    return 0;  // program ends successfully
}
