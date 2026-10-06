#include <iostream>
using namespace std;
 
class Point {
    int x, y;
public:
    Point(int a, int b) {
        x = a;
        y = b;
    }
    Point(const Point &p) {
        x = p.x;
        y = p.y;
        cout << "Copy constructor called" << endl;
    }
    void display() {
        cout << "x = " << x << ", y = " << y << endl;
    }
};
 
int main() {
    Point p1(10, 20);
    Point p2 = p1;   // copy constructor invoked
    Point p3(p1);    // copy constructor invoked
 
    cout << "p1: "; p1.display();
    cout << "p2: "; p2.display();
    cout << "p3: "; p3.display();
    return 0;
}

