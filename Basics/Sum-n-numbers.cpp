
/*
  Program Name: Sum of First N Natural Numbers
  Description:
  This program calculates the sum of the first n natural numbers
  using the mathematical formula n*(n+1)/2.
*/

#include <iostream>   // Header file for input and output
using namespace std;

int main() {
    int n, sum;   // Declare variables

    // Take input from user
    cout << "Enter the number: ";
    cin >> n;

    // Calculate sum using formula
    sum = n * (n + 1) / 2;

    
    cout << "The sum is: " << sum;

    return 0;   // End of program
}