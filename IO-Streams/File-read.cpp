/*
Program Name: Reading from a File in C++

Definition:
ifstream is used to read data from a file in C++.

Description:
- File is opened using ifstream.
- Data is read line by line and displayed on screen.
*/

#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    // Creating file object
    ifstream fin;

    // Opening file
    fin.open("data.txt");

    string line;

    // Reading data
    while(getline(fin, line))
    {
        cout << line << endl;
    }

    // Closing file
    fin.close();

    return 0;
}