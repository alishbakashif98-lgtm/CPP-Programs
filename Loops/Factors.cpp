/*
Program Name: Factors of a Number

Definition:
This program takes a number from the user and prints
all the factors (divisors) of that number.

Factor Definition:
A factor (or divisor) of a number n is a number
which divides n exactly (without leaving a remainder).
Example: Factors of 6 → 1, 2, 3, 6

For Loop Definition:
A for loop is used when the number of iterations is
known in advance. It repeats a block of code a fixed
number of times.

If Statement Definition:
An if statement checks a condition. If true, the code
inside executes; otherwise it is skipped.
*/

#include <iostream>   // header file for input and output
using namespace std;  // using standard namespace

int main() {

    int n, i = 1;
    // n → number entered by user
    // i → loop control variable

    // asking user to enter a number
    cout << "Enter a number : ";
    cin >> n;   // storing input in n

    // displaying message before printing factors
    cout << "The factors of " << n << " are given below:" << endl;

    // for loop to check each number from 1 to n
    for (i = 1; i <= n; i++) {

        // if i divides n exactly → it is a factor
        if (n % i == 0) {
            cout << i << endl;  // printing the factor
        }
    }

    return 0;  // program ends successfully
}
