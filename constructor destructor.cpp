#include <iostream>
using namespace std;
 
class Demo {
public:
    Demo() {
        cout << "Constructor called" << endl;
    }
    ~Demo() {
        cout << "Destructor called" << endl;
    }
};
 
int main() {
    cout << "Start of main" << endl;
    {
        Demo d;
        cout << "Inside inner block" << endl;
    }
    cout << "End of main" << endl;
    return 0;
}

