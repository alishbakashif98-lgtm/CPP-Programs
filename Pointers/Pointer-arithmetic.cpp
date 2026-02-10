/*
Program Title: Pointer Arithmetic Demonstration

Definition:
Pointer arithmetic is the process of performing mathematical operations such as
addition (+) and subtraction (-) on pointers to move them across memory locations.
When a pointer is increased or decreased, it moves according to the size of the
data type it points to rather than moving by a single byte.

Purpose:
This program demonstrates different pointer arithmetic operations including
pointer increment, decrement, addition, subtraction, and finding the difference
between two pointers.
*/

#include <iostream>
using namespace std;

int main() {

    int arr[5] = {10, 20, 30, 40, 50};

    int *p = arr;   // Pointer pointing to the first element of the array

    // Accessing elements using pointer
    cout << "Initial value (*p): " << *p << endl;   // 10

    // Pointer increment (p + 1)
    cout << "Value at *(p + 1): " << *(p + 1) << endl; // 20

    // Pointer addition with number
    cout << "Value at *(p + 3): " << *(p + 3) << endl; // 40

    // Moving pointer forward using ++
    p++;
    cout << "After p++ , *p: " << *p << endl; // 20

    // Moving pointer backward using --
    p--;
    cout << "After p-- , *p: " << *p << endl; // 10

    // Pointer subtraction
    cout << "Value at *(p - 0): " << *(p - 0) << endl; // 10

    // Using another pointer
    int *q = &arr[4]; // Points to last element

    cout << "Value at *q: " << *q << endl; // 50

    // Pointer difference
    cout << "Difference between q and p: " << q - p << endl;
    // Output will be number of elements between pointers

    return 0;
}
