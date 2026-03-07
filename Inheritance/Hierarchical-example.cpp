/*
Program Name: Hierarchical Inheritance – Employee Example

Definition:
Hierarchical inheritance is a type of inheritance in which
multiple derived classes inherit from a single base class.

Description:
In this program, the base class Employee contains the data member
name and a function to set the name. Two classes FullTimeEmployee
and PartTimeEmployee inherit from Employee. Each derived class
contains its own specific data member (salary or daily wage) and
a function to display the details.
*/

#include<iostream>
using namespace std;

// Base class
class Employee {

protected:
    string name;   // data member

public:
    // Function to set name
    void setName(string n) {
        name = n;
    }
};

// Derived class 1: Full-time employee
class FullTimeEmployee : public Employee {

private:
    int salary;   // data member

public:
    // Function to set salary
    void setSalary(int s) {
        salary = s;
    }

    // Function to display full-time employee details
    void display() {
        cout << "Salary of " << name << " is " << salary << endl;
    }
};

// Derived class 2: Part-time employee
class PartTimeEmployee : public Employee {

private:
    int dailyWage;   // data member

public:
    // Function to set daily wage
    void setDailyWage(int w) {
        dailyWage = w;
    }

    // Function to display part-time employee details
    void display() {
        cout << "Daily wage of " << name << " is " << dailyWage << endl;
    }
};

int main() {

    // Full-time employee object
    FullTimeEmployee ft;
    ft.setName("Ali");
    ft.setSalary(5000);
    ft.display();

    // Part-time employee object
    PartTimeEmployee pt;
    pt.setName("Ahmad");
    pt.setDailyWage(1000);
    pt.display();

    return 0;
}