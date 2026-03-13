/*
Program Name: Static Variable and Static Function in C++

Definition:
A static variable in a class is shared by all objects of that class.
A static function can access only static members of the class and
can be called using the class name.
*/

#include<iostream>
using namespace std;

class Student
{
public:
    static int count;   // Static variable

    // Constructor
    Student()
    {
        count++;
    }

    // Static function
    static void showCount()
    {
        cout << "Total Students: " << count << endl;
    }
};

// Defining static variable
int Student::count = 0;

int main()
{
    Student s1;
    Student s2;
    Student s3;

    // Calling static function
    Student::showCount();

    return 0;
}