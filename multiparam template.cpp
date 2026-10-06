#include <iostream>
using namespace std;
 
template <class T1, class T2>
class Pair {
    T1 first;
    T2 second;
public:
    Pair(T1 a, T2 b) : first(a), second(b) {}
    void display() {
        cout << "First = " << first << ", Second = " << second << endl;
    }
};
 
int main() {
    Pair<int, string> p1(101, "Ravi");
    Pair<string, double> p2("Salary", 55000.75);
 
    p1.display();
    p2.display();
    return 0;
}

