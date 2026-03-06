/*
Program Name: Rational Number Addition using Operator Overloading

Description:
This program creates a class for Rational Numbers (p/q).
It uses operator overloading to:
1. Add two rational numbers using '+' operator.
2. Display rational numbers using '<<' insertion operator.

Definition:
A Rational Number is represented in the form p/q where:
p = numerator
q = denominator

Formula for Addition:
(p1/q1) + (p2/q2) = (p1*q2 + p2*q1) / (q1*q2)
*/

#include<iostream>
using namespace std;

// Class Definition
class Rational
{
private:
    int p; // numerator
    int q; // denominator

public:

    // Constructor
    Rational(int num=0, int den=1)
    {
        p = num;
        q = den;
    }

    // Overloading + operator
    Rational operator+(Rational r)
    {
        Rational temp;
        temp.p = (p * r.q) + (r.p * q);
        temp.q = q * r.q;
        return temp;
    }

    // Friend function for << operator
    friend ostream& operator<<(ostream &out, Rational r);
};

// Definition of << operator
ostream& operator<<(ostream &out, Rational r)
{
    out << r.p << "/" << r.q;
    return out;
}

int main()
{
    Rational r1(3,4);
    Rational r2(2,5);
    Rational sum;

    sum = r1 + r2;

    cout << "Sum of " << r1 << " and " << r2 << " is " << sum;

    return 0;
}