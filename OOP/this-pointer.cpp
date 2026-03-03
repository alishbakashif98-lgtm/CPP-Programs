/*
Program Name: this Pointer Example

Definition:
The 'this' pointer is an implicit pointer
available inside all non-static member functions.

It points to the calling object.

It is mainly used:
1. To differentiate between data members
   and local variables when they have same name.
2. To return the calling object.
*/

#include<iostream>
using namespace std;

class student{

private:
    int marks;

public:

    // Constructor using this pointer
    student(int marks)
    {
        // marks (parameter) and marks (data member) have same name
        // this->marks refers to class data member
        this->marks = marks;
    }

    void show()
    {
        cout << "Marks are " << marks << endl;
    }
};

int main(){

    student s1(90);   // Object created

    s1.show();

    return 0;
}