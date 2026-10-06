#include <iostream>
using namespace std;
 
inline int square(int x) {
    return x * x;
}
 
int add(int a, int b) {
    cout << "add(int, int) called" << endl;
    return a + b;
}
double add(double a, double b) {
    cout << "add(double, double) called" << endl;
    return a + b;
}
int add(int a, int b, int c) {
    cout << "add(int, int, int) called" << endl;
    return a + b + c;
}
 
int main() {
    cout << "Square of 5 = " << square(5) << endl;
    cout << "Sum = " << add(10, 20) << endl;
    cout << "Sum = " << add(10.5, 20.3) << endl;
    cout << "Sum = " << add(10, 20, 30) << endl;
    return 0;
}

