/*
Program Name: Right-Aligned Increasing Star Pattern

Definition:
This program prints a right-aligned triangle star pattern
using nested for loops and an if-else condition.
Stars are printed based on the sum of row and column indices.

For Loop Definition:
A for loop is used when the number of iterations is known.
The outer loop controls rows and the inner loop controls columns.

Nested Loop Definition:
A nested loop is a loop inside another loop.
The inner loop runs completely for each iteration of the outer loop.

If-Else Definition:
The if-else statement checks a condition.
Here, stars are printed when the sum of row index (i)
and column index (j) is greater than (n - 1).
*/

#include <iostream>   // header file for input-output
using namespace std;  // using standard namespace

int main() {

    int i, j;   // loop control variables

    // outer loop controls number of rows
    for (i = 0; i < 5; i++) {

        // inner loop controls columns
        for (j = 0; j < 5; j++) {

            // condition to print star or space
            if (i + j > 5 - 1)
                cout << "* ";   // print star
            else
                cout << "  ";   // print space
        }

        // move to next line after each row
        cout << endl;
    }

    return 0;   // program ends
}
