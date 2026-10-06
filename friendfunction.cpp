#include<iostream>
using namespace std;
 
class Box {
private:
    double length;
public:
    Box(double l) : length(l) {}
    friend void printLength(Box b);
};
void printLength(Box b) {
    cout << "Length of Box = " << b.length << endl;
}
 
class A;
class B {
    int valueB = 15;
public:
    friend class A;
};
class A {
public:
    void showB(B b) {
        cout << "Value of B accessed from A (friend class) = " << b.valueB << endl;
    }
};
 
int main() {
    Box box(12.5);
    printLength(box);
 
    A a;
    B b;
    a.showB(b);
    return 0;
}

