/*
Program Name: Sum of Natural Numbers
Definition:
This program takes a number from the user and calculates
the sum of natural numbers from 1 to that number using
a while loop.

While Loop Definition:
A while loop is used when we do not know in advance
how many times the loop will run.
The loop continues to execute as long as the given
condition remains true.
*/

#include <iostream>   // header file for input and output
using namespace std;  // using standard namespace

int main() {

    int n, i = 1, sum = 0;
    // n   → number entered by user
    // i   → loop control variable
    // sum → stores the sum of numbers

    // asking user to enter a number
    cout << "Enter a number : ";
    cin >> n;   // storing input in n

    // while loop to calculate sum from 1 to n
    while (i <= n) {

        sum += i;  // adding current value of i to sum
        i++;       // incrementing i by 1
    }

    // displaying the final sum
    cout << "The sum of " << n << " is : " << sum;

    return 0;  // program ends successfully
}
