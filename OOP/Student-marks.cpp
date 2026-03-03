/*
Program Name: Student Result System

Concepts Used:
1. Class and Object
2. Constructor
3. Member Functions
4. Encapsulation
5. Grading Logic

Definition:
This program demonstrates how a class can store
student information and calculate total marks
and grade using member functions.

Class: Student
Object: s
*/

#include<iostream>
using namespace std;

class Student{

// Data Members (Private by default)
int RollNo;
string name;
int phyMarks;
int chemMarks;
int mathMarks;

public:

// Parameterized Constructor
Student(int r , string n , int m , int p , int c )
{
    RollNo = r;
    name = n;
    phyMarks = p;
    chemMarks = c; 
    mathMarks = m;
}

// Function to calculate total marks
int Total(){

    return phyMarks + chemMarks + mathMarks;
}

// Function to calculate grade
char Grade(){

    float average = Total() / 3;

    if ( average >= 60 )
        return 'A' ;
    else if ( average >= 40 )
        return 'B';
    else
        return 'C' ;
}

};

int main(){

int Roll ;
string name ;
int m , p , c ;

cout << "Enter your roll number : ";
cin >> Roll ;

cout << "Enter your name : ";
cin >> name ;

cout << "Enter your physics number : ";
cin >> p ;

cout << "Enter your chemistry number : ";
cin >> c ;

cout << "Enter your maths number : ";
cin >> m ;

// Creating object using constructor
Student s(Roll , name , m , p , c) ;

cout << "Total marks : " << s.Total() << endl;
cout << "Grade of Student : " << s.Grade();

return 0 ;

}