#include<iostream>
using namespace std;

class Shape
{
public:
    // Pure virtual functions
    virtual float area() = 0;
    virtual float perimeter() = 0;
};

class Rectangle : public Shape
{
private:
    float length;
    float breadth;

public:
    // Constructor
    Rectangle(int l = 1, int b = 1)
    {
        length = l;
        breadth = b;
    }

    // Overriding area function
    float area()
    {
        return length * breadth;
    }

    // Overriding perimeter function
    float perimeter()
    {
        return 2 * (length + breadth);
    }
};

class Circle : public Shape
{
private:
    float radius;

public:
    // Constructor
    Circle(float r)
    {
        radius = r;
    }

    // Overriding area function
    float area()
    {
        return 3.1425 * radius * radius;
    }

    // Overriding perimeter function
    float perimeter()
    {
        return 2 * 3.1425 * radius;
    }
};

int main()
{
    Shape *s;

    // Rectangle object
    s = new Rectangle(10,5);
    cout << "Area of Rectangle " << s->area() << endl;
    cout << "Perimeter of Rectangle " << s->perimeter() << endl;

    // Circle object
    s = new Circle(10);
    cout << "Area of Circle " << s->area() << endl;
    cout << "Perimeter of Circle " << s->perimeter() << endl;

    return 0;
}