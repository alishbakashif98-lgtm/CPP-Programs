/*
Program Name: Reverse of Digits

Definition:
This program takes a number from the user and displays
the digits of the number in reverse order using a
while loop.

Logic Explanation:
The last digit of a number is obtained using the
modulus operator (% 10). After extracting the digit,
the number is divided by 10 to remove the last digit.
This process prints digits in reverse order.

While Loop Definition:
A while loop is used when the number of iterations is
not known in advance. The loop continues to execute
as long as the given condition remains true.
*/

#include <iostream>   // header file for input and output
using namespace std;  // using standard namespace

int main() {

    int n, r;
    // n → number entered by user
    // r → stores remainder (digit)

    // asking user to enter a number
    cout << "Enter a number : ";
    cin >> n;   // storing input in n
    cout << "Reverse of number is " << endl ;
    // while loop to print digits in reverse order
    while (n > 0) {

        r = n % 10;   // extracting last digit
        n = n / 10;   // removing last digit

        cout << r << endl;  // printing digit
    }

    return 0;  // program ends successfully
}
