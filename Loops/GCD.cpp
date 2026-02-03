/*
Program Name: GCD of Two Numbers

Definition:
This program takes two numbers from the user and finds
their Greatest Common Divisor (GCD) using the subtraction
method with the help of a while loop.

GCD Definition:
The Greatest Common Divisor (GCD) of two numbers is the
largest positive number that divides both numbers exactly.
Example: GCD of 12 and 18 is 6.

While Loop Definition:
A while loop is used when the number of iterations is
not known in advance. The loop keeps running as long
as the given condition remains true.

Logic Explanation:
If one number is greater than the other, the smaller
number is subtracted from the greater one. This process
continues until both numbers become equal. That equal
value is the GCD.
*/

#include <iostream>   // header file for input and output
using namespace std;  // using standard namespace

int main() {

    int n, m;
    // n → first number
    // m → second number

    // asking user to enter first number
    cout << "Enter first number : ";
    cin >> n;

    // asking user to enter second number
    cout << "Enter second number : ";
    cin >> m;

    // while loop to find GCD using subtraction method
    while (m != n) {

        if (m > n)
            m = m - n;   // subtract n from m
        else if (n > m)
            n = n - m;   // subtract m from n
    }

    // displaying the GCD
    cout << "GCD of two numbers is : " << m;

    return 0;  // program ends successfully
}
