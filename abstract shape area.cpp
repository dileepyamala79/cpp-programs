#include <iostream>
using namespace std;
 
class Shape {
public:
    virtual double area() = 0;   // pure virtual function
    virtual ~Shape() {}
};
 
class Circle : public Shape {
    double radius;
public:
    Circle(double r) : radius(r) {}
    double area() override {
        return 3.14159 * radius * radius;
    }
};
 
class Rectangle : public Shape {
    double length, width;
public:
    Rectangle(double l, double w) : length(l), width(w) {}
    double area() override {
        return length * width;
    }
};
 
class Triangle : public Shape {
    double base, height;
public:
    Triangle(double b, double h) : base(b), height(h) {}
    double area() override {
        return 0.5 * base * height;
    }
};
 
int main() {
    Shape *s;
    Circle c(5);
    Rectangle r(4, 6);
    Triangle t(3, 8);
 
    s = &c;
    cout << "Area of Circle = " << s->area() << endl;
    s = &r;
    cout << "Area of Rectangle = " << s->area() << endl;
    s = &t;
    cout << "Area of Triangle = " << s->area() << endl;
    return 0;
}

