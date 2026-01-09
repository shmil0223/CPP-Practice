#include <iostream>
using namespace std;
class CFigure {
public:
    virtual double getArea() = 0; // 纯虚函数
    virtual ~CFigure() {} // 虚析构函数
};
    
class CCircle : public CFigure {
private:
    double radius;
public:
    CCircle(double r) : radius(r)  {}
    double getArea( ) override { return 3.14 * radius * radius; }
    ~CCircle() override {}
};

class CRectangle : public CFigure {
private:
     double height, width;
public:
    CRectangle(double h, double w) : height(h), width(w) { }
    double getArea() override { return height * width; }
    ~CRectangle() override {}
};

int main() {
    CFigure* figure1 = new CRectangle(4.0, 5.0);
    cout << "矩形面积: " << figure1->getArea() << endl;
    delete figure1;
    
    CFigure* figure2 = new CCircle(4.0);
    cout << "圆形面积: " << figure2->getArea() << endl;
    delete figure2;
    
    return 0;
}