/*
Program Name: Pointer to Object Example

Definition:
A pointer can also point to an object of a class.

Instead of accessing members using dot (.)
operator, we use arrow (->) operator
when working with object pointers.

In this program:
- rectangle → class
- r         → object
- p         → pointer to object r

Arrow Operator (->):
Used to access data members and member functions
through object pointer.
*/

#include<iostream>
using namespace std;

class rectangle{

public:

    // Data Members
    int length;
    int breadth;

    // Member Function
    int area(){
        return length * breadth;
    }

};

int main(){

    // Create object
    rectangle r;

    // Create pointer to object
    rectangle *p;

    // Assign address of object to pointer
    p = &r;

    // Access data members using arrow operator
    p->length = 8;
    p->breadth = 4;

    // Call member function using pointer
    cout << "Area of rectangle is "
         << p->area();

    return 0;
}