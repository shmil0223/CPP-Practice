#ifndef RECTANGLE_H
#define RECTANGLE_H
#include "GeometricObject.h"

class Rectangle : public GeometricObject {
public:
    Rectangle();
    Rectangle(double width, double height);
    Rectangle(double width, double height, const std::string& color, bool filled);
    double getWidth() const;
    void setWidth(double width);
    double getHeight() const;
    void setHeight(double height);
    double getArea() const;
    double getPerimeter() const;
    std::string toString() const;

private:
    double width;
    double height;
};

#endif
