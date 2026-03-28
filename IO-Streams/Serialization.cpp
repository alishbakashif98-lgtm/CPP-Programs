/*
Program Name: Serialization in C++ (Without Binary)

Definition:
Serialization is the process of storing object data into a file.
In this program, data is stored in text format instead of binary.

Description:
- A class Student is created.
- Object data is written to a text file using ofstream.
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
    s1.id = 1;
    s1.name = "Ali";

    // Writing object data to file (text format)
    ofstream fout("student.txt");

    fout << s1.id << endl;
    fout << s1.name << endl;

    fout.close();

    cout << "Object serialized in text file";

    return 0;
}