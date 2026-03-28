/*
Program Name: Deserialization in C++ (Text File)

Definition:
Deserialization is the process of reading object data from a file.

Description:
- Data is read from student.txt file.
- Values are stored back into object.
*/

#include<iostream>
#include<fstream>
using namespace std;

class Student
{
public:
    int id;
    string name;
};

int main()
{
    Student s1;

    // Reading data from file
    ifstream fin("student.txt");

    fin >> s1.id;
    fin >> s1.name;

    fin.close();

    // Displaying data
    cout << "ID: " << s1.id << endl;
    cout << "Name: " << s1.name << endl;

    return 0;
}