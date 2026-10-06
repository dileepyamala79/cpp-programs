#include <iostream>
using namespace std;
 
// (i) Single Inheritance
class Animal {
public:
    void eat() { cout << "Animal eats" << endl; }
};
class Dog : public Animal {
public:
    void bark() { cout << "Dog barks" << endl; }
};
 
// (ii) Multiple Inheritance
class Father {
public:
    void skill1() { cout << "Father: Business skills" << endl; }
};
class Mother {
public:
    void skill2() { cout << "Mother: Cooking skills" << endl; }
};
class Child : public Father, public Mother {
public:
    void ownSkill() { cout << "Child: Coding skills" << endl; }
};
 
// (iii) Multilevel Inheritance
class A {
public:
    void showA() { cout << "Class A" << endl; }
};
class B : public A {
public:
    void showB() { cout << "Class B" << endl; }
};
class C : public B {
public:
    void showC() { cout << "Class C" << endl; }
};
 
// (iv) Hierarchical Inheritance
class Shape {
public:
    void info() { cout << "This is a Shape" << endl; }
};
class Circle : public Shape {
public:
    void area() { cout << "Circle area formula" << endl; }
};
class Square : public Shape {
public:
    void area() { cout << "Square area formula" << endl; }
};
 
// (v) Hybrid Inheritance
class Base1 {
public:
    void baseFn() { cout << "Base1 function" << endl; }
};
class Derived1 : public Base1 {};
class Derived2 {
public:
    void derived2Fn() { cout << "Derived2 function" << endl; }
};
class Hybrid : public Derived1, public Derived2 {};
 
int main() {
    cout << "--- Single Inheritance ---" << endl;
    Dog d; d.eat(); d.bark();
 
    cout << "\n--- Multiple Inheritance ---" << endl;
    Child c; c.skill1(); c.skill2(); c.ownSkill();
 
    cout << "\n--- Multilevel Inheritance ---" << endl;
    C obj; obj.showA(); obj.showB(); obj.showC();
 
    cout << "\n--- Hierarchical Inheritance ---" << endl;
    Circle circle; circle.info(); circle.area();
    Square square; square.info(); square.area();
 
    cout << "\n--- Hybrid Inheritance ---" << endl;
    Hybrid h; h.baseFn(); h.derived2Fn();
    return 0;
}

