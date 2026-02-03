/*
Program Name: Palindrome Number Check

Definition:
This program takes a number from the user, finds the
reverse of the number, and checks whether the number
is a palindrome or not using a do-while loop.

Palindrome Definition:
A palindrome number is a number that remains the same
when its digits are reversed.
Example: 121, 343, 1221

Do-While Loop Definition:
A do-while loop executes the loop body at least once
before checking the condition. The loop continues
as long as the condition remains true.
*/

#include <iostream>   // header file for input and output
using namespace std;  // using standard namespace

int main() {

    int n, num, rev = 0, digit;
    // n     → original number
    // num   → copy of number for calculation
    // rev   → stores reversed number
    // digit → stores last digit

    // asking user to enter a number
    cout << "Enter a number : ";
    cin >> n;

    num = n;  // saving original number in num

    // do-while loop to reverse the number
    do {
        digit = num % 10;              // extracting last digit
        rev = (rev * 10) + digit;      // building reverse number
        num = num / 10;                // removing last digit
    } while (num != 0);

    // displaying reverse number
    cout << "The reverse of a number is : " << rev << endl;

    // checking palindrome condition
    if (n == rev)
        cout << "The number is a palindrome";
    else
        cout << "The number is not a palindrome";

    return 0;  // program ends successfully
}
