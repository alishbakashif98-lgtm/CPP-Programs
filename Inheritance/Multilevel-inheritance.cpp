/*
Program Name: Multilevel Inheritance in C++

Definition:
Multilevel inheritance is a type of inheritance in which
a class is derived from another derived class.

Description:
In this program, class B inherits from class A,
and class C inherits from class B.
So the object of class C can access the member
functions of class A, class B, and its own class.
*/

#include<iostream>
using namespace std;

// Base class
class A{

public:

    // Function of class A
    void show()
    {
        cout << "Function of class A" << endl;
    }

};

// Derived class inheriting class A
class B : public A{

public:

    // Function of class B
    void display()
    {
        cout << "Function of class B" << endl;
    }

};

// Derived class inheriting class B
class C : public B{

public:

    // Function of class C
    void print()
    {
        cout << "Function of class C" << endl;
    }

};

int main(){

    // Creating object of class C
    C obj;

    // Accessing functions of all classes
    obj.show();     // from class A
    obj.display();  // from class B
    obj.print();    // from class C

    return 0;
}