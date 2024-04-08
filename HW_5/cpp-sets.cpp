#include <bits/stdc++.h>
using namespace std;

int q;
set <int> s;
int type_q, num;

int main() {
    cin >> q;
    while (q--) {
        cin >> type_q >> num;
        if (type_q == 1) {
            s.insert(num);
        }
        else if (type_q == 2)
            s.erase(num);
        else {
            if (s.find(num) == s.end()) {
                cout << "No" << endl;
            }
            else cout << "Yes" << endl;
        }
    }
}
