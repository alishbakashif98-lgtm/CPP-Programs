/*
Program Name: Find Maximum Element in an Array

Definition:
This program stores elements in an array and finds
the maximum (largest) element present in the array
using a for loop.

Logic Explanation:
First element of the array is assumed as maximum.
Then each element is compared with the current
maximum. If a larger element is found, maximum
is updated.

For Loop Definition:
A for loop is used when the number of iterations
is known in advance. It repeats a block of code
a fixed number of times.
*/

#include <iostream>   // header file for input and output
using namespace std;  // using standard namespace

int main() {

    int A[5] = {3, 4, 9, 15, 6};
    // A → integer array of size 5

    int max = A[0];   // assuming first element as maximum

    // for loop to find maximum element
    for (int i = 1; i < 5; i++) {

        if (A[i] > max)
            max = A[i];   // updating maximum value
    }

    // displaying maximum element
    cout << "Maximum number is : " << max;

    return 0;  // program ends successfully
}
