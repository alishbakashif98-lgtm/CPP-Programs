/*
Program Name: Armstrong Number Check

Definition:
This program takes a number from the user and checks
whether the number is an Armstrong number or not
using a while loop.

Armstrong Number Definition:
An Armstrong number is a number whose sum of the cubes
of its digits is equal to the original number.
Example: 153 → 1³ + 5³ + 3³ = 153

While Loop Definition:
A while loop is used when the number of iterations
is not known in advance. The loop runs as long as
the given condition is true.
*/

#include <iostream>   // header file for input and output
using namespace std;  // using standard namespace

int main() {

    int n, r, m, sum = 0;
    // n   → number entered by user
    // r   → stores last digit
    // m   → stores original number
    // sum → stores sum of cubes of digits

    // asking user to enter a number
    cout << "Enter a number : ";
    cin >> n;   // storing input in n

    m = n;  // saving original number

    // while loop to calculate sum of cubes of digits
    while (n > 0) {

        r = n % 10;          // extracting last digit
        n = n / 10;          // removing last digit
        sum = sum + r*r*r;   // adding cube of digit
    }

    // checking Armstrong condition
    if (sum == m)
        cout << m << " is an Armstrong number";
    else
        cout << m << " is not an Armstrong number";

    return 0;  // program ends 
}
