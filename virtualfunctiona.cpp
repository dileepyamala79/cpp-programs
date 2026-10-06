#include <iostream>
using namespace std;
 
class Shape {
public:
    virtual void draw() {
        cout << "Drawing a generic shape" << endl;
    }
};
class Circle : public Shape {
public:
    void draw() override {
        cout << "Drawing a circle" << endl;
    }
};
class Rectangle : public Shape {
public:
    void draw() override {
        cout << "Drawing a rectangle" << endl;
    }
};
 
int main() {
    Shape *shapes[3];
    Shape s;
    Circle c;
    Rectangle r;
    shapes[0] = &s;
    shapes[1] = &c;
    shapes[2] = &r;
 
    for (int i = 0; i < 3; i++) {
        shapes[i]->draw();  // runtime polymorphism
    }
    return 0;
}

