/*
Program Name: Basic Functions of C++ String Class

Definition:
string is a class in C++ used to store and manipulate text.
It provides built-in functions like length(), size(),
capacity(), max_size(), empty(), clear(), resize() etc.
*/

#include<iostream>
#include<string>
using namespace std;

int main(){

    string s = "Programming";

    // 1. length() -> returns number of characters
    cout << "Length: " << s.length() << endl;

    // 2. size() -> same as length()
    cout << "Size: " << s.size() << endl;

    // 3. capacity() -> returns current allocated memory
    cout << "Capacity: " << s.capacity() << endl;

    // 4. max_size() -> maximum size string can hold
    cout << "Max Size: " << s.max_size() << endl;

    // 5. empty() -> checks if string is empty
    cout << "Is Empty: " << s.empty() << endl;

    // 6. resize() -> changes the size of string
    s.resize(5);
    cout << "After resize(5): " << s << endl;

    // If new size is bigger, extra characters are filled with default character
    s.resize(10, '*');
    cout << "After resize(10, '*'): " << s << endl;

    // 7. clear() -> removes all characters
    s.clear();
    cout << "After Clear, Is Empty: " << s.empty() << endl;

    return 0;
}
