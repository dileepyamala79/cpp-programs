#include <iostream>
using namespace std;
 
void greet(string name, string message = "Welcome to C++") {
    cout << name << ", " << message << endl;
}
 
class Demo {
private:
    int privateData;
protected:
    int protectedData;
public:
    int publicData;
    Demo() {
        privateData = 10;
        protectedData = 20;
        publicData = 30;
    }
    void showPrivate() {
        cout << "Private Data (accessed inside class) = " << privateData << endl;
    }
};
 
int main() {
    greet("Ravi");
    greet("Kiran", "Good Morning");
 
    Demo d;
    d.showPrivate();
    cout << "Public Data (accessed outside class) = " << d.publicData << endl;
    // d.privateData;      // Error: not accessible outside class
    // d.protectedData;    // Error: not accessible outside class
    return 0;
}

