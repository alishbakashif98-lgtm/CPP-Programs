/*
Program Name: Display Elements of an Array

Definition:
This program stores values in an array and displays
all the elements of the array using a range-based
for loop (for-each loop).

Array Definition:
An array is a collection of elements of the same data
type stored at contiguous memory locations.
Each element is accessed using an index.

Range-Based For Loop Definition:
A range-based for loop is used to iterate through
all elements of an array or collection easily.
It directly accesses each element without using
index values.
*/

#include <iostream>   // header file for input and output
using namespace std;  // using standard namespace

int main() {

    int A[5] = {3, 4, 9, 15, 6};
    // A → integer array of size 5

    // range-based for loop to display array elements
    for (int x : A) {

        cout << x << endl;   // printing each element
    }

    return 0;  // program ends 
}
