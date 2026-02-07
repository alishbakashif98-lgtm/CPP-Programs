/*
Program Name: Average of Array Elements

Definition:
This program calculates the average of 'n' numbers
entered by the user. It stores the numbers in an
array and then computes the sum and average using
a for loop.

Array Definition:
An array is a collection of elements of the same type
stored in contiguous memory locations. Here, float
array is used to store decimal numbers.

For Loop Definition:
A for loop is used to repeat a block of code a fixed
number of times. Here, it is used to input elements
and calculate their sum.
*/

#include <iostream>   // header file for input-output
using namespace std;  // using standard namespace

int main() {

    int n, i;                // n → number of elements, i → loop control
    float num[100], sum = 0, average;  // array, sum, and average

    // input number of elements
    cout << "Enter number of elements : ";
    cin >> n;

    // input array elements and calculate sum
    for (i = 0; i < n; i++) {
        cout << i + 1 << ". Enter the number : ";
        cin >> num[i];
        sum += num[i];
    }

    // calculate average
    average = sum / n;

    // display average
    cout << "The average of elements is : " << average;

    return 0;   // program ends
}
