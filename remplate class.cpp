#include <iostream>
using namespace std;
 
template <class T>
class Stack {
    T arr[100];
    int top;
public:
    Stack() { top = -1; }
    void push(T val) {
        arr[++top] = val;
    }
    T pop() {
        return arr[top--];
    }
    bool isEmpty() {
        return top == -1;
    }
};
 
int main() {
    Stack<int> intStack;
    intStack.push(10);
    intStack.push(20);
    intStack.push(30);
    cout << "Popping int stack: ";
    while (!intStack.isEmpty()) {
        cout << intStack.pop() << " ";
    }
    cout << endl;
 
    Stack<string> strStack;
    strStack.push("Ravi");
    strStack.push("Kiran");
    cout << "Popping string stack: ";
    while (!strStack.isEmpty()) {
        cout << strStack.pop() << " ";
    }
    cout << endl;
    return 0;
}

