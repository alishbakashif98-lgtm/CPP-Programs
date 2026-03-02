/*
Program Name: Dynamic Object Creation using new

Definition:
An object of a class can be created dynamically
using the 'new' operator.

When an object is created using 'new':
- Memory is allocated in heap.
- It must be accessed using a pointer.
- Members are accessed using arrow (->) operator.

In this program:
rectangle *p;  → pointer to object
p = new rectangle; → dynamic object creation
*/

#include<iostream>
using namespace std;

class rectangle{

public:

    // Data Members
    int length;
    int breadth;

    // Member Function to calculate perimeter
    int perimeter(){
        return 2 * (length + breadth);
    }

};

int main(){

    // Pointer to rectangle object
    rectangle *p;

    // Dynamically creating object in heap memory
    p = new rectangle;

    // Assign values using arrow operator
    p->length = 8;
    p->breadth = 4;

    // Call member function using pointer
    cout << "Perimeter of rectangle is "
         << p->perimeter();

    return 0;
}