/*
Program Name: Perfect Number Check

Definition:
This program takes a number from the user and checks
whether the given number is a perfect number or not.

For Loop Definition:
A for loop is used when the number of iterations
is known in advance. It repeats a block of code
for a fixed number of times.

If Statement Definition:
An if statement is used to check a condition.
If the condition is true, the code inside the
if block is executed; otherwise, the else block runs.
*/

#include <iostream>   // header file for input and output
using namespace std;  // using standard namespace

int main() {

    int n, i, sum = 0;
    // n   → number entered by user
    // i   → loop control variable
    // sum → stores sum of divisors

    // asking user to enter a number
    cout << "Enter a number : ";
    cin >> n;   // storing input in n

    // for loop to find divisors of n
    for (i = 1; i <= n; i++) {

        // checking whether i is a divisor of n
        if (n % i == 0) {

            sum += i;   // adding divisor to sum
        }
    }

    // checking perfect number condition
    if (2 * n == sum)
        cout << "Perfect number";
    else
        cout << "Not a perfect number";

    return 0;  // program ends successfully
}
