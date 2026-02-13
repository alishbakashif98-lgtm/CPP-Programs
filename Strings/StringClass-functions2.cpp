/*
Program Name: String Modifying Functions in C++

Functions Used:
append(), insert(), replace(),
erase(), swap(), push_back(), pop_back()
*/

#include<iostream>
#include<string>
using namespace std;

int main(){

    string s1 = "Hello";
    string s2 = "World";

    // 1. append() -> adds text at the end
    s1.append(" Everyone");
    cout << "After append: " << s1 << endl;

    // 2. insert() -> inserts text at specific position
    s1.insert(6, "Beautiful ");
    cout << "After insert: " << s1 << endl;

    // 3. replace() -> replaces part of string
    s1.replace(6, 9, "Amazing ");
    cout << "After replace: " << s1 << endl;

    // 4. erase() -> removes part of string
    s1.erase(6, 8);   // remove 8 characters from index 6
    cout << "After erase: " << s1 << endl;

    // 5. push_back() -> adds single character at end
    s1.push_back('!');
    cout << "After push_back: " << s1 << endl;

    // 6. pop_back() -> removes last character
    s1.pop_back();
    cout << "After pop_back: " << s1 << endl;

    // 7. swap() -> swaps two strings
    s1.swap(s2);
    cout << "After swap:" << endl;
    cout << "s1: " << s1 << endl;
    cout << "s2: " << s2 << endl;

    return 0;
}
