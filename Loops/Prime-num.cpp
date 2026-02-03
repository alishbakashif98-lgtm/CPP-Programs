/*
Program Name: Prime Number Check

Definition:
This program takes a number from the user and checks
whether the number is prime or not.

Prime Number Definition:
A prime number is a number greater than 1 which has
exactly two positive divisors: 1 and itself.
Example: 2, 3, 5, 7, 11 ...

For Loop Definition:
A for loop is used when the number of iterations is
known in advance. It repeats a block of code a fixed
number of times.

If Statement Definition:
An if statement checks a condition. If true, the code
inside executes; otherwise the else block runs.
*/

#include <iostream>   // header file for input and output
using namespace std;  // using standard namespace

int main() {

    int n, count = 0, i = 1;
    // n     → number entered by user
    // count → counts number of divisors
    // i     → loop control variable

    // asking user to enter a number
    cout << "Enter a number : ";
    cin >> n;   // storing input in n

    // for loop to check divisors of n
    for (i = 1; i <= n; i++) {

        // check if i is a divisor of n
        if (n % i == 0) {
            count++;  // increment count for each divisor
        }
    }

    // if number has exactly 2 divisors → prime
    if (count == 2)
        cout << n << " is a prime number";
    else
        cout << n << " is not a prime number";

    return 0;  // program ends successfully
}
