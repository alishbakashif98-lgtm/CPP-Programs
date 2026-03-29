/*
Program Name: Use of final Keyword in C++

Definition:
The 'final' keyword in C++ is used to prevent inheritance or overriding.
- When used with a class, it cannot be inherited.
- When used with a virtual function, it cannot be overridden in derived classes.

Description:
- A base class Animal is created with a virtual function sound().
- A derived class Dog overrides the sound() function and marks it as final.
- Another class Puppy tries to override the same function, which will cause an error.
*/

#include<iostream>
using namespace std;

// Base class
class Animal
{
public:
    virtual void sound()   // Virtual function
    {
        cout << "Animal makes a sound" << endl;
    }
};

// Derived class
class Dog : public Animal
{
public:
    void sound() final   // Overridden and marked as final
    {
        cout << "Dog barks" << endl;
    }
};

// Another derived class
class Puppy : public Dog
{
public:
    // This will cause an error because sound() is final in Dog
    // void sound()
    // {
    //     cout << "Puppy barks softly" << endl;
    // }
};

int main()
{
    Dog d;
    d.sound();   // Calls Dog's sound function

    return 0;
}