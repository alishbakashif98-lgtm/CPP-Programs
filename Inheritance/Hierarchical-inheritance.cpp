/*
Program Name: Hierarchical Inheritance in C++

Definition:
Hierarchical inheritance is a type of inheritance in which
multiple derived classes inherit from a single base class.

Description:
In this program, the base class Person contains the data member
name and a function to set the name. Two classes Student and
Teacher inherit from Person. Both derived classes can access
the base class data and also contain their own data members
and functions.
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

private:
    int marks;   // data member

public:

    // Function to set marks
    void setMarks(int m)
    {
        marks = m;
    }

    // Function to display student details
    void displayStudent()
    {
        cout << "Student Name: " << name << endl;
        cout << "Marks: " << marks << endl;
    }

};

// Second derived class
class Teacher : public Person{

private:
    int salary;   // data member

public:

    // Function to set salary
    void setSalary(int s)
    {
        salary = s;
    }

    // Function to display teacher details
    void displayTeacher()
    {
        cout << "Teacher Name: " << name << endl;
        cout << "Salary: " << salary << endl;
    }

};

int main(){

    // Object of Student
    Student s;
    s.setName("Ali");
    s.setMarks(85);
    s.displayStudent();

    cout << endl;

    // Object of Teacher
    Teacher t;
    t.setName("Ahmed");
    t.setSalary(50000);
    t.displayTeacher();

    return 0;
}