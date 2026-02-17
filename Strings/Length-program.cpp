/*
Program Name: Finding Length of String

Definition:
Length of a string means total number of characters present in it.

Method 1:
Using loop and index.

Method 2:
Using iterator.

Both methods count characters manually
without using built-in length() function.
*/

#include<iostream>
#include<string>
using namespace std;

int main(){

    string str = "WELCOME";
    int count = 0;

    // Method 1: Using index
    for(int i = 0; str[i] != '\0'; i++)
    {
        count++;
    }

    cout << "Length using index: " << count << endl;

    // Method 2: Using iterator
    int count2 = 0;
    for(string::iterator it = str.begin(); it != str.end(); it++)
    {
        count2++;
    }

    cout << "Length using iterator: " << count2 << endl;

    return 0;
}
