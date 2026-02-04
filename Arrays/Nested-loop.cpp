/*
Program Name: Nested Loop Pattern

Definition:
This program uses nested for loops to print numbers
in rows and columns. The outer loop controls the rows
and the inner loop controls the columns.

For Loop Definition:
A for loop is used when the number of iterations is
known. It has initialization, condition, and increment.

Nested Loop Definition:
A nested loop is a loop inside another loop. The inner
loop completes all its iterations for each single
iteration of the outer loop.
*/

#include <iostream>   // header file for input and output
using namespace std;  // using standard namespace

int main() {

    int i, j;  // loop control variables

    // outer loop controls rows
    for (i = 1; i <= 4; i++) {

        // inner loop controls columns
        for (j = 1; j <= 4; j++) {
            cout << j << " ";  // printing column number
        }

        cout << endl;  // move to next line after each row
    }

    return 0;  // program ends
}
