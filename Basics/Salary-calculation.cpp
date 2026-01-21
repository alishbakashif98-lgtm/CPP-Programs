/*
Program Name: Salary_calculation.cpp
Description: This program calculates the Net Salary of an employee.
             - The user enters the basic salary.
             - The user enters the percentage of allowances.
             - The user enters the percentage of deductions.
             - Net Salary is calculated using the formula:

             Net Salary = Basic Salary 
                          + (Basic Salary * Allowances / 100)
                          - (Basic Salary * Deductions / 100)

             This program demonstrates the use of input/output
             and arithmetic operators in C++.
*/

#include <iostream>
using namespace std;

int main()
{
    // Declaring variables
    float basic;          // Basic salary
    float percentAllow;   // Percentage of allowances
    float percentDeduct;  // Percentage of deductions
    float netSalary;      // Net salary

    // Taking input from user
    cout << "Enter Basic Salary: ";
    cin >> basic;

    cout << "Enter percent of Allowances: ";
    cin >> percentAllow;

    cout << "Enter percent of Deductions: ";
    cin >> percentDeduct;

    // Calculating net salary
    netSalary = basic 
                + (basic * percentAllow / 100)
                - (basic * percentDeduct / 100);

    // Displaying net salary
    cout << "Net Salary is: " << netSalary << endl;

    return 0; // Program ends successfully
}
