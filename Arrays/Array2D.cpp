/*
Program Name: 2D Array Traversal

Definition:
This program demonstrates the use of a two-dimensional
array in C++. It stores elements in the form of rows and
columns and prints all elements using nested for loops.

2D Array Definition:
A two-dimensional array is an array of arrays.
It is used to store data in table (matrix) form
using rows and columns.

For Loop Definition:
A for loop is used when the number of iterations is known.
Here, nested for loops are used to access rows and columns.

Nested Loop Definition:
The outer loop controls rows and the inner loop
controls columns of the 2D array.
*/

#include <iostream>   // header file for input-output
using namespace std;  // using standard namespace

int main() {

    // declaration and initialization of 2D array
    int A[2][3] = { {2, 3, 4}, {5, 6, 7} };

    // outer loop for rows
    for (int i = 0; i < 2; i++) {

        // inner loop for columns
        for (int j = 0; j < 3; j++) {
            cout << A[i][j] << " ";   // print array element
        }

        // move to next line after each row
        cout << endl;
    }

    return 0;   // program ends
}
