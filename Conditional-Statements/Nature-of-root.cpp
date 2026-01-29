/*
Program Name: Quadratic Equation Roots
Definition:
This program takes values of a, b, and c from the user.
It calculates the discriminant (d) of a quadratic equation.
Based on the value of d, it determines whether the roots
are real and equal, real and unequal, or imaginary.

Note:
The sqrt() function is used to find the square root.
Therefore, <cmath> header file is required.
*/

#include<iostream>          
#include<cmath>            // Header file for sqrt() function
using namespace std;      

int main(){

int a , b , c , d , r1 , r2 ;    // Variable declaration

cout << "Enter a , b and c : ";
cin >> a >> b >> c ;             // Taking input from user       

d = (b*b) - (4*a*c);             // Calculate discriminant

if( d == 0 )                     // If discriminant is zero
{
cout << "Roots are real and equal"<< endl ;
cout << ( -b / (2*a) );          // Calculate equal roots
}

else if ( d > 0 )                // If discriminant is positive
{
r1 = (-b + sqrt(d) / (2*a));     // First root
r2 = (-b - sqrt(d) / (2*a));     // Second root
cout << "Roots are real and unequal"<< endl ; 
cout << r1 <<" and " << r2 ;  
} 

else                             // If discriminant is negative
cout << "Roots are imaginary" ;

return 0;                        // End of program
}
