/*25. Create a C++ Base class Shape with a constructor for
providing values for width and height. Then define two
derived classes Triangle and Rectangle, that calculate
the area of the shape area(). In the main, define two
objects: a triangle and a rectangle and then call the
area() function by this two objects.*/

#include <iostream>

using namespace std;

class Shape {
protected:
    int width;
    int height;
public:
    Shape(int w, int h) {
        width = w;
        height = h;
    }
    virtual int area() = 0; // Pure virtual function
};

class Triangle : public Shape {
public:
    Triangle(int w, int h) : Shape(w, h) {}

    int area() {
        return (width * height) / 2;
    }
};

class Rectangle : public Shape {
public:
    Rectangle(int w, int h) : Shape(w, h) {}

    int area() {
        return width * height;
    }
};

int main() {
    Triangle triangle(5, 10);
    Rectangle rectangle(6, 8);

    cout << "Area of triangle: " << triangle.area() << endl;
    cout << "Area of rectangle: " << rectangle.area() << endl;

    return 0;
}
