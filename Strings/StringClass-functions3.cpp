/*
Program Name: Advanced String Class Functions

Functions Used:
find(), rfind(), find_first_of(),
find_last_of(), substr(), compare()
*/

#include<iostream>
#include<string>
using namespace std;

int main(){

    string s = "Hello World";

    // 1. find() -> finds first occurrence of substring
    cout << "find(\"World\"): " << s.find("World") << endl;

    // 2. rfind() -> finds last occurrence of substring
    cout << "rfind(\"l\"): " << s.rfind("l") << endl;

    // 3. find_first_of() -> finds first occurrence of any character
    cout << "find_first_of(\"od\"): " << s.find_first_of("od") << endl;

    // 4. find_last_of() -> finds last occurrence of any character
    cout << "find_last_of(\"lo\"): " << s.find_last_of("lo") << endl;

    // 5. substr(start, length) -> extracts part of string
    cout << "substr(6,5): " << s.substr(6,5) << endl;

    // 6. compare() -> compares two strings
    string s2 = "Hello";
    cout << "compare(\"Hello\"): " << s.compare(s2) << endl;

    return 0;
}
