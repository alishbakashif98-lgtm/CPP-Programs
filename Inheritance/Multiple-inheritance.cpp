/*
Program Name: Multiple Inheritance in C++

Definition:
Multiple inheritance is a type of inheritance in which
a single derived class inherits properties and behaviors
from more than one base class.

Description:
In this program, the class Result inherits from two base classes:
Marks and Sports. The Marks class stores subject marks,
the Sports class stores sports score, and the Result class
calculates the total score using data from both base classes.
*/

#include<iostream>
using namespace std;

// First Base class
class Marks{

protected:
    int math;
    int physics;

public:

    // Function to set subject marks
    void setMarks(int m, int p)
    {
        math = m;
        physics = p;
    }

};

// Second Base class
class Sports{

protected:
    int score;

public:

    // Function to set sports score
    void setScore(int s)
    {
        score = s;
    }

};

// Derived class inheriting from both Marks and Sports
class Result : public Marks, public Sports{

public:

    // Function to display total result
    void displayResult()
    {
        int total = math + physics + score;

        cout << "Math Marks: " << math << endl;
        cout << "Physics Marks: " << physics << endl;
        cout << "Sports Score: " << score << endl;
        cout << "Total Score: " << total << endl;
    }

};

int main(){

    // Creating object of derived class
    Result r;

    // Setting values
    r.setMarks(80, 75);
    r.setScore(10);

    // Displaying result
    r.displayResult();

    return 0;
}