#include<iostream>
using namespace std;
int main(){

    int a , b;
    cout << "Enter two numbers : ";
    cin >> a;
    cin >> b;
    if(a > b)
    cout << "Maximum number is "<< a ;
    else
    cout << "Maximum number is "<< b ;
    return 0;
}