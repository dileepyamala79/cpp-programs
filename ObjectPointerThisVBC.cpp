#include <iostream>
using namespace std;
 
class Engine {
public:
    Engine() { cout << "Engine created" << endl; }
    void start() { cout << "Engine started" << endl; }
};
 
class Car {
    Engine e;        // object as a class member
    string model;
public:
    Car(string m) { model = m; }
    Car* setModel(string m) {
        this->model = m;   // this pointer
        return this;
    }
    void show() {
        cout << "Car model: " << model << endl;
        e.start();
    }
};
 
// Virtual Base Class
class Vehicle {
public:
    void info() { cout << "Generic Vehicle" << endl; }
};
class TwoWheeler : virtual public Vehicle {};
class FourWheeler : virtual public Vehicle {};
class Amphibious : public TwoWheeler, public FourWheeler {};
 
int main() {
    Car c("Sedan");
    c.setModel("SUV")->show();
 
    Car *ptr = &c;      // pointer to class object
    ptr->show();
 
    Amphibious a;
    a.info();            // no ambiguity due to virtual base class
    return 0;
}

