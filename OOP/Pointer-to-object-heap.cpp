#include<iostream>
using namespace std;

class rectangle{

public:

int length;
int breadth;

int perimeter(){

    return 2*(length+breadth) ;
}


};

int main(){

rectangle *p;
p = new rectangle;

p -> length = 8 ;
p -> breadth = 4 ;

cout << "Perimeter of rectangle is " << p -> perimeter() ;

return 0;
}