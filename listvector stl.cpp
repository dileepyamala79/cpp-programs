#include <iostream>
#include <list>
#include <vector>
using namespace std;
 
int main() {
    // Vector operations
    vector<int> v = {10, 20, 30};
    v.push_back(40);
    v.insert(v.begin() + 1, 15);
    cout << "Vector elements: ";
    for (int x : v) cout << x << " ";
    cout << endl;
 
    v.pop_back();
    cout << "Vector after pop_back: ";
    for (int x : v) cout << x << " ";
    cout << endl;
 
    // List operations
    list<string> l = {"Apple", "Banana", "Mango"};
    l.push_front("Grapes");
    l.push_back("Orange");
    cout << "List elements: ";
    for (const string &s : l) cout << s << " ";
    cout << endl;
 
    l.remove("Banana");
    cout << "List after removing Banana: ";
    for (const string &s : l) cout << s << " ";
    cout << endl;
    return 0;
}

