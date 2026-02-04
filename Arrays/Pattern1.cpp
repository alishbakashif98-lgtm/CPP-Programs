/*
Program Name: Inverted Star Pattern using Nested Loop

Definition:
This program prints an inverted right-angled triangle
pattern using stars (*). The pattern is generated using
nested for loops and a conditional statement.

Nested Loop Definition:
A nested loop is a loop inside another loop. The outer
loop controls the number of rows, while the inner loop
controls the number of columns.

Condition Definition (if statement):
The if statement is used to check a condition.
Here, stars are printed only when column number (j)
is greater than or equal to row number (i).
*/

#include <iostream>   // header file for input-output
using namespace std;  // using standard namespace

int main() {

    int i, j;   // loop control variables

    // outer loop controls number of rows
    for (i = 0; i <= 4; i++) {

        // inner loop controls columns
        for (j = 0; j <= 4; j++) {

            // condition to print star
            if (j >= i)
                cout << "* ";
        }

        // move to next line after each row
        cout << endl;
    }

    return 0;   // program ends successfully
}
