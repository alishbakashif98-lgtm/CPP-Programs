/*
Program Name: Multiplication of Two Matrices (2D Arrays)

Definition:
This program multiplies two matrices entered by the user.
It first checks if the matrices are compatible for multiplication
(columns of first = rows of second). Then it multiplies them
using nested loops and prints the resulting matrix.

2D Array Definition:
A two-dimensional array stores data in rows and columns.
Here, matrices are stored in 2D arrays.

Nested Loop Definition:
Outer loop → rows of result matrix
Inner loop → columns of result matrix
Innermost loop → sum of products for multiplication
*/

#include <iostream>
using namespace std;

int main() {
    int a[10][10], b[10][10], mult[10][10];
    int r1, c1, r2, c2, i, j, k;

    // Input dimensions of first matrix
    cout << "Enter rows and columns for first matrix: ";
    cin >> r1 >> c1;

    // Input dimensions of second matrix
    cout << "Enter rows and columns for second matrix: ";
    cin >> r2 >> c2;

    // Check compatibility
    while (c1 != r2) {
        cout << "Error! Column of first matrix not equal to row of second.\n";
        cout << "Enter rows and columns for first matrix: ";
        cin >> r1 >> c1;
        cout << "Enter rows and columns for second matrix: ";
        cin >> r2 >> c2;
    }

    // Input elements of first matrix
    cout << "\nEnter elements of matrix 1:\n";
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c1; j++) {
            cout << "Enter element a" << i+1 << j+1 << " : ";
            cin >> a[i][j];
        }
    }

    // Input elements of second matrix
    cout << "\nEnter elements of matrix 2:\n";
    for (i = 0; i < r2; i++) {
        for (j = 0; j < c2; j++) {
            cout << "Enter element b" << i+1 << j+1 << " : ";
            cin >> b[i][j];
        }
    }

    // Initialize result matrix with 0
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c2; j++) {
            mult[i][j] = 0;
        }
    }

    // Matrix multiplication logic
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c2; j++) {
            for (k = 0; k < c1; k++) {
                mult[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    // Display the output matrix
    cout << "\nOutput Matrix: " << endl;
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c2; j++) {
            cout << " " << mult[i][j];
            if (j == c2 - 1)
                cout << endl;
        }
    }

    return 0;
}
