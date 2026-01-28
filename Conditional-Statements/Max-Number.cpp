#include<iostream>  // Include the library for input/output operations
using namespace std; // Use the standard namespace

int main() {

    // Declare two integer variables to store numbers
    int a, b;

    // Display message asking the user to enter two numbers
    cout << "Enter two numbers : ";

    // Take input from the user
    cin >> a >> b;
    

    // Conditional statement: check which number is greater
    if(a > b)
        // If 'a' is greater than 'b', this line will execute
        cout << "Maximum number is " << a;
    else
        // If 'b' is greater than or equal to 'a', this line will execute
        cout << "Maximum number is " << b;

    // Return 0 to indicate that the program ended successfully
    return 0;
}
