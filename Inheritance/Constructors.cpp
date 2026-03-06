/*
Program Name: Constructor Calling in Inheritance with Parameter Values

Definition:
A constructor is a special member function of a class that is automatically
called when an object is created. It is mainly used for initializing objects.

Description:
This program demonstrates how constructors work in inheritance.
- The Base class has both non-parameterized and parameterized constructors.
- The Derived class also contains its own constructors.
- When an object of Derived class is created, the Base class constructor
  executes first and then the Derived class constructor.
- The initializer list is used to pass value to the Base class constructor.
- In this program we also print the values passed to parameterized constructors.
*/

#include<iostream>
using namespace std;

class Base{
  
  public:

  // Non-parameterized constructor
  Base(){
      cout << "Non-parameterized Base class constructor" << endl;
  }

  // Parameterized constructor
  Base(int x){
      cout << "Parameterized Base class constructor with value x = " << x << endl;
  }

};

class Derived: public Base{
 
  public:

  // Non-parameterized constructor
  Derived(){
      cout << "Non-parameterized Derived class constructor" << endl;
  }

  // Parameterized constructor
  Derived(int y){
      cout << "Parameterized Derived class constructor with value y = " << y << endl;
  }

  // Constructor calling Base class parameterized constructor
  Derived(int x, int y) : Base(x){
      cout << "Parameterized Derived class constructor with value y = " << y << endl;
  }

};

int main(){
    
    Derived d;        // Calls default constructors
    Derived d1(10,5); // Calls parameterized constructors

    return 0;
}