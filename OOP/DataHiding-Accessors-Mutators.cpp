/*
Program Name: Encapsulation and Data Hiding Example

Concepts Used:

1. Data Hiding:
   Data members are declared as private.
   They cannot be accessed directly from outside the class.

2. Accessors (Getter Functions):
   Functions used to read private data.
   Example: getLength(), getBreadth()

3. Mutators (Setter Functions):
   Functions used to modify private data.
   Example: setLength(), setBreadth()

4. Encapsulation:
   Binding data and functions together in a single unit (class).
*/

#include<iostream>
using namespace std;

class rectangle{

private:
    // Data Members (Hidden from outside)
    int length;
    int breadth;

public:

    // Mutator Function (Setter)
    void setLength(int l)
    {
        if (l > 0)
            length = l;
        else
            length = 0;
    }

    // Mutator Function (Setter)
    void setBreadth(int b)
    {
        if (b > 0)
            breadth = b;
        else
            breadth = 0;
    }

    // Accessor Function (Getter)
    int getLength()
    {
        return length;
    }

    // Accessor Function (Getter)
    int getBreadth()
    {
        return breadth;
    }

    // Member Function
    int area()
    {
        return length * breadth;
    }

    // Member Function
    int perimeter()
    {
        return 2 * (length + breadth);
    }
};

int main(){

    rectangle r;

    // Using mutator functions to set values
    r.setLength(10);
    r.setBreadth(-5);   // Invalid value → will become 0

    // Using accessor functions to get values
    cout << "Breadth of rectangle is "
         << r.getBreadth() << endl;

    cout << "Area of rectangle is "
         << r.area() << endl;

    cout << "Perimeter of rectangle is "
         << r.perimeter() << endl;

    return 0;
}