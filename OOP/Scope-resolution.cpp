/*
Program Name: Scope Resolution Operator Example

Definition:
Scope Resolution Operator (::) is used
to define member functions of a class
outside the class definition.

This improves readability
and separates class declaration from implementation.
*/

#include<iostream>
using namespace std;

class student{

private:
    int marks;

public:
    void setMarks(int m);   // Function declaration
    void showMarks();       // Function declaration
};

// Function definitions outside class using ::
void student::setMarks(int m)
{
    marks = m;
}

void student::showMarks()
{
    cout << "Marks of student are " << marks << endl;
}

int main(){

    student s;

    s.setMarks(85);
    s.showMarks();

    return 0;
}