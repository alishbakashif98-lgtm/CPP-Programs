/*
Program Name: Find Length of String

Definition:
A string is a collection of characters stored in a character array.
The strlen() function (from <cstring> library) is used to calculate
the length of a string. It counts the number of characters in the
string excluding the null character '\0'.

This program takes a string from the user and displays its length.
*/

#include<iostream>
#include<cstring>   // Required for strlen()
using namespace std;

int main(){

    char s[20];

    // Taking full line input including spaces
    cout << "Enter the string : ";
    cin.getline(s, 20);

    // strlen() calculates length of string
    cout << "Length is " << strlen(s);

    return 0;
}
