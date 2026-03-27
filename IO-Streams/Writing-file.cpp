/*
Program Name: Writing to a File in C++

Definition:
File handling in C++ allows us to store data in files.
ofstream is used to write data to a file.

Description:
- A file is created using ofstream.
- Data is written into the file.
*/

#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    // Creating file object
    ofstream fout;

    // Opening file
    fout.open("data.txt");

    // Writing data
    fout << "Hello, this is file handling in C++";

    // Closing file
    fout.close();

    cout << "Data written to file successfully";

    return 0;
}