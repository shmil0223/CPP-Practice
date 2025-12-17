#include <iostream>
#include "GeometricObject.h"
#include "Circle.h"
#include "Rectangle.h"

using namespace std;

int main() {
    GeometricObject shape("blue", true);
    cout << shape.toString() << endl;
    cout << "Color: " << shape.getColor() << endl;
    cout << "Filled: " << (shape.isFilled() ? "true" : "false") << endl;

    cout << "----------------" << endl;

    Circle circle(5);
    circle.setColor("red");
    circle.setFilled(true);
    cout << circle.toString() << endl;
    cout << "Color: " << circle.getColor() << endl;
    cout << "Radius: " << circle.getRadius() << endl;
    cout << "Area: " << circle.getArea() << endl;
    cout << "Perimeter: " << circle.getPerimeter() << endl;

    cout << "----------------" << endl;

    Rectangle rectangle(2, 4);
    rectangle.setColor("green");
    rectangle.setFilled(false);
    cout << rectangle.toString() << endl;
    cout << "Color: " << rectangle.getColor() << endl;
    cout << "Width: " << rectangle.getWidth() << endl;
    cout << "Height: " << rectangle.getHeight() << endl;
    cout << "Area: " << rectangle.getArea() << endl;
    cout << "Perimeter: " << rectangle.getPerimeter() << endl;

    system("pause");
    return 0;
}
