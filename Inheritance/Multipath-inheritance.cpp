/*
Program Name: Multipath Inheritance in C++

Definition:
Multipath inheritance is a type of inheritance in which
a class inherits from two classes, and those two classes
further inherit from a common base class. This may cause
ambiguity, known as diamond problem.

Description:
In this program, the base class Person contains the data member
name and a function to set the name. Two classes Student and
Teacher inherit from Person. Finally, class TA inherits from both
Student and Teacher, demonstrating multipath inheritance.
*/

#include<iostream>
using namespace std;

// Base class
class Person{

protected:
    string name;   // data member

public:

    // Function to set name
    void setName(string n)
    {
        name = n;
    }

};

// First derived class
class Student : public Person{

protected:
    int rollNo;   // data member

public:

    // Function to set roll number
    void setRollNo(int r)
    {
        rollNo = r;
    }

};

// Second derived class
class Teacher : public Person{

protected:
    int salary;   // data member

public:

    // Function to set salary
    void setSalary(int s)
    {
        salary = s;
    }

};

// Final class (multipath inheritance)
class TA : public Student, public Teacher{

public:

    // Function to display details
    void display()
    {
        cout << "TA Name: " << Student::name << endl;
        cout << "Roll No: " << rollNo << endl;
        cout << "Salary: " << salary << endl;
    }

};

int main(){

    TA obj;

    obj.Student::setName("Ali"); // ambiguity resolved
    obj.setRollNo(101);
    obj.setSalary(20000);

    obj.display();

    return 0;
}