/*
Program Name: Function Overriding in C++

Definition:
Function Overriding is a feature of inheritance in which a derived class
provides its own implementation of a function that is already defined
in the base class. The function in the derived class has the same name
and same parameters as the function in the base class.

Description:
- A Base class is created with a function Display().
- A Derived class inherits from Base class.
- The Derived class also defines its own Display() function.
- When the object of Derived class calls Display(), the Derived class
  function is executed instead of the Base class function.

Note:
If we want to call the Base class function, we can use scope resolution (::).
*/

#include<iostream>
using namespace std;

// Base class
class Base{

    public:

    // Function of Base class
    void Display(){
        cout << "Display of Base";
    }
    
};

// Derived class inheriting from Base class
class Derived: public Base{

    public:

    // Function overriding
    // This function overrides the Display() function of Base class
    void Display(){
        cout << "Display of Derived";
    }
    
};

int main()
{
   // Creating object of Derived class
   Derived d;

   // Calling Display function
   // Derived class version will execute
   d.Display();

   return 0;
}