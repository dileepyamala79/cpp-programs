#include <iostream>
using namespace std;
 
template <class T>
T maximum(T a, T b) {
    return (a > b) ? a : b;
}
 
int main() {
    cout << "Max of 10, 20 = " << maximum(10, 20) << endl;
    cout << "Max of 15.5, 9.3 = " << maximum(15.5, 9.3) << endl;
    cout << "Max of 'a', 'z' = " << maximum('a', 'z') << endl;
    return 0;
}

