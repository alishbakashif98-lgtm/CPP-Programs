/*
Program Name: Linear Search in Array

Definition:
This program takes elements of an array from the user
and searches a given key value using linear search.
If the key is found, its index is displayed.

Linear Search Definition:
Linear search is a searching technique in which each
element of the array is checked one by one until the
required element is found or the array ends.

For Loop Definition:
A for loop is used when the number of iterations is
known in advance. It repeats a block of code a fixed
number of times.
*/

#include <iostream>   // header file for input and output
using namespace std;  // using standard namespace

int main() {

    int A[5], i, key;
    // A   → array to store elements
    // i   → loop control variable
    // key → value to be searched

    // taking array elements from user
    cout << "Enter the numbers : " << endl;
    for (i = 0; i < 5; i++) {
        cin >> A[i];
    }

    // taking key from user
    cout << "Enter the key : ";
    cin >> key;

    // linear search using for loop
    for (i = 0; i < 5; i++) {

        if (key == A[i]) {
            cout << "Key is found at index " << i;
            return 0;   // program ends if key is found
        }
    }

    // if key is not found
    cout << "Key is not found";

    return 0;  // program ends successfully
}
