#include <iostream>
#include <string>
using namespace std;

string s1, s2;

int main() {
    cin >> s1 >> s2;
    cout << s1.size() << ' ' << s2.size() << '\n';
    cout << s1 + s2 << '\n';
    swap(s1[0], s2[0]);
    cout << s1 << ' ' << s2;
    return 0;
}

