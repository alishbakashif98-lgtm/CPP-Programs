/*
Program Name: String Iterators in C++

Definition:
An iterator is an object that is used to traverse (move through)
elements of a container like string, vector, list, etc.

In string class, iterators allow us to access each character
one by one without using index numbers.

Important Functions:

1. begin()
   Returns iterator pointing to the first character of string.

2. end()
   Returns iterator pointing just after the last character.

3. rbegin()
   Returns reverse iterator pointing to the last character.

4. rend()
   Returns reverse iterator pointing just before the first character.

Types of Iterators in String:

1. iterator
   - Used to read and modify characters.
   - Moves forward.

2. const_iterator
   - Used only for reading.
   - Cannot modify characters.

3. reverse_iterator
   - Moves in reverse direction.
   - Starts from end and moves to beginning.

Purpose:
This program demonstrates forward, constant, and reverse traversal
of a string using different types of iterators.
*/

#include<iostream>
#include<string>
using namespace std;

int main(){

    string s = "Programming";

    // 1. Using iterator (can modify)
    cout << "Using iterator: ";
    for(string::iterator it = s.begin(); it != s.end(); it++)
    {
        cout << *it;
    }
    cout << endl;

    // 2. Using const_iterator (read-only)
    cout << "Using const_iterator: ";
    for(string::const_iterator it = s.begin(); it != s.end(); it++)
    {
        cout << *it;
    }
    cout << endl;

    // 3. Using reverse_iterator
    cout << "Using reverse_iterator: ";
    for(string::reverse_iterator it = s.rbegin(); it != s.rend(); it++)
    {
        cout << *it;
    }
    cout << endl;

    return 0;
}
