#ifndef CIRCLE_H
#define CIRCLE_H
#include "GeometricObject.h"

class Circle : public GeometricObject {
public:
    Circle();
    Circle(double radius);
    Circle(double radius, const std::string& color, bool filled);
    double getRadius() const;
    void setRadius(double radius);
    double getArea() const;
    double getPerimeter() const;
    std::string toString() const;

private:
    double radius;
};

#endif
