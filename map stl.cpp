#include <iostream>
#include <map>
using namespace std;
 
int main() {
    map<int, string> m;
    m[101] = "Ravi";
    m[103] = "Kiran";
    m[102] = "Anita";
    m.insert({104, "Sita"});
 
    cout << "Map elements (sorted by key):" << endl;
    for (auto &p : m) {
        cout << p.first << " : " << p.second << endl;
    }
 
    m.erase(103);
    cout << "\nMap after erasing key 103:" << endl;
    for (auto &p : m) {
        cout << p.first << " : " << p.second << endl;
    }
 
    if (m.find(101) != m.end())
        cout << "\nKey 101 found, value = " << m[101] << endl;
    return 0;
}

