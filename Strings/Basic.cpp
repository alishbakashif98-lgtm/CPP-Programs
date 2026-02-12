/*
Program Name: Input Single Name and Full Name

Definition:
cin >> variable is used to take single word input.
cin.getline() is used to take full line input including spaces.

This program takes a short name and a full name from the user
and displays a welcome message.
*/

#include<iostream>
using namespace std;

int main(){

    char s[20];
    char s2[20];

    // Taking single word input
    cout << "Enter your name : ";
    cin >> s;

    cin.ignore();   // This clears the leftover newline from input buffer

    // Taking full name input (including spaces)
    cout << "Enter your full name : ";
    cin.getline(s2, 20);

    cout << "Welcome " << s2;

    return 0;
}
