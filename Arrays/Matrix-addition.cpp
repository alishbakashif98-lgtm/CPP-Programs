/*
Program Name: Addition of Two 2D Arrays (Matrix Addition)

Definition:
This program adds two two-dimensional arrays element by element
and stores the result in a third 2D array. Nested for loops
are used to access rows and columns.

2D Array Definition:
A two-dimensional array is an array of arrays.
It stores data in the form of rows and columns (matrix form).

For Loop Definition:
A for loop is used when the number of iterations is known.
Nested loops are used here to traverse the 2D arrays.

Nested Loop Definition:
The outer loop controls rows and the inner loop
controls columns of the 2D array.
*/

#include <iostream>   // header file for input-output
using namespace std;  // using standard namespace

int main() {

    // declaration and initialization of two 2D arrays
    int A[2][3] = { {2, 3, 4}, {5, 6, 7} };
    int B[2][3] = { {1, 2, 3}, {4, 5, 6} };
    int C[2][3];   // array to store result

    // matrix addition using nested loops
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {

            // adding corresponding elements
            C[i][j] = A[i][j] + B[i][j];
        }
    }

    // printing the resultant matrix
    cout << "Sum of two 2D arrays is:" << endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            cout << C[i][j] << " ";
        }
        cout << endl;
    }

    return 0;   // program ends
}
