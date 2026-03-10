/*
Program Name: Pure Virtual Function in C++

Definition:
A Pure Virtual Function is a virtual function that has no implementation
in the base class and is declared by assigning 0 (=0). A class containing
a pure virtual function becomes an Abstract Class and cannot be instantiated.

Description:
- A base class Car is created.
- It contains two pure virtual functions Start() and Stop().
- Two derived classes Innova and Swift inherit from Car.
- Both classes override the Start() and Stop() functions.
- A base class pointer is used to point to objects of both derived classes.
- The correct function is called at runtime (Runtime Polymorphism).
*/

#include<iostream>
using namespace std;

// Abstract Base Class
class Car{

public:

    // Pure Virtual Functions
    virtual void Start() = 0;
    virtual void Stop() = 0;

};

// Derived class 1
class Innova : public Car{

public:

    // Overriding Start function
    void Start(){
        cout << "Innova Started" << endl;
    }

    // Overriding Stop function
    void Stop(){
        cout << "Innova Stopped" << endl;
    }

};

// Derived class 2
class Swift : public Car{

public:

    // Overriding Start function
    void Start(){
        cout << "Swift Started" << endl;
    }

    // Overriding Stop function
    void Stop(){
        cout << "Swift Stopped" << endl;
    }

};

int main(){

    // Base class pointer
    Car *c;

    // Objects of derived classes
    Innova i;
    Swift s;

    // Pointer pointing to Innova object
    c = &i;
    c->Start();
    c->Stop();

    // Pointer pointing to Swift object
    c = &s;
    c->Start();
    c->Stop();

    return 0;
}