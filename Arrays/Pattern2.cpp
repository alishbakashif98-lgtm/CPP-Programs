/*
Program Name: Right-Aligned Star Pattern using Nested Loop

Definition:
This program prints a right-aligned triangle star pattern.
Spaces and stars are printed using nested for loops and
an if-else condition.

For Loop Definition:
A for loop is used when the number of iterations is known.
The outer loop controls rows and the inner loop controls columns.

Nested Loop Definition:
A nested loop is a loop inside another loop where the inner
loop completes all iterations for each iteration of the outer loop.

If-Else Definition:
The if-else statement is used to make decisions.
Here, spaces are printed when row number (i) is greater than
column number (j); otherwise, stars are printed.
*/

#include <iostream>   // header file for input-output
using namespace std;  // using standard namespace

int main() {

    int i, j;   // loop control variables

    // outer loop controls number of rows
    for (i = 0; i < 5; i++) {

        // inner loop controls columns
        for (j = 0; j < 5; j++) {

            // condition to print space or star
            if (i > j)
                cout << " ";   // print space
            else
                cout << "*";   // print star
        }

        // move to next line after each row
        cout << endl;
    }

    return 0;   // program ends
}
