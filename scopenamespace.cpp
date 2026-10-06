#include <iostream>
using namespace std;
 
int value = 100; // global variable
 
namespace First {
    int value = 10;
    void display() {
        cout << "Value inside First namespace = " << value << endl;
    }
}
 
namespace Second {
    int value = 20;
    void display() {
        cout << "Value inside Second namespace = " << value << endl;
    }
}
 
int main() {
    int value = 5; // local variable
    cout << "Local value = " << value << endl;
    cout << "Global value = " << ::value << endl;
 
    First::display();
    Second::display();
 
    cout << "First namespace value directly = " << First::value << endl;
    cout << "Second namespace value directly = " << Second::value << endl;
    return 0;
}

