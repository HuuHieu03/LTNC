#include <bits/stdc++.h>
using namespace std;

int q;
int type_q;
map <string, int> m;

int main() {
    cin >> q;
    string s;
    int a;
    while (q--) {
        cin >> type_q >> s;
        if (type_q == 1) {
            cin >> a;
            m[s] += a;
        }
        else if (type_q == 2) m[s] = 0;
        else cout << m[s] << endl;
    }

}
