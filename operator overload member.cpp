#include <iostream>
using namespace std;
 
class Complex {
    int real, imag;
public:
    Complex(int r = 0, int i = 0) : real(r), imag(i) {}
 
    // Binary operator overloading
    Complex operator+(Complex c) {
        return Complex(real + c.real, imag + c.imag);
    }
 
    // Unary operator overloading
    Complex operator-() {
        return Complex(-real, -imag);
    }
 
    void display() {
        cout << real << " + " << imag << "i" << endl;
    }
};
 
int main() {
    Complex c1(3, 4), c2(1, 2);
    Complex c3 = c1 + c2;   // binary
    Complex c4 = -c1;       // unary
 
    cout << "c1 = "; c1.display();
    cout << "c2 = "; c2.display();
    cout << "c1 + c2 = "; c3.display();
    cout << "-c1 = "; c4.display();
    return 0;
}

