#include <iostream>
using namespace std;
 
int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int choice;
    cout << "Enter 1 for division test, 2 for array test: ";
    cin >> choice;
 
    try {
        if (choice == 1) {
            int a = 10, b = 0;
            if (b == 0) throw b;             // throws int
            cout << a / b << endl;
        } else if (choice == 2) {
            int index;
            cout << "Enter index: ";
            cin >> index;
            if (index < 0 || index >= 5)
                throw string("Array index out of bounds"); // throws string
            cout << "Value = " << arr[index] << endl;
        } else {
            throw 3.14;                       // throws double
        }
    }
    catch (int e) {
        cout << "Caught an integer exception: divisor = " << e << endl;
    }
    catch (string &e) {
        cout << "Caught a string exception: " << e << endl;
    }
    catch (double e) {
        cout << "Caught a double exception: " << e << endl;
    }
    catch (...) {
        cout << "Caught an unknown exception" << endl;
    }
    return 0;
}

