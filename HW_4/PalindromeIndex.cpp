#include <bits/stdc++.h>
using namespace std;

string s;
string cp1, cp2;


int main() {
    int t;
    cin >> t;
    while (t--) {
        cin >> s;
        int L = 0, R = s.size() - 1;
        bool fl = 1;
        while (L <= (s.size() - 1) / 2) {
            if (s[L] != s[R]) {
                fl = 0;
                break;
            }
            L++;
            R--;
        }
        if (fl == 1) {
            cout << -1 << endl;
            continue;
        }
        s.erase(s.begin() + L);
        cp1 = s;
        reverse(s.begin(), s.end());
        if (cp1 == s) {
            cout << L << endl;
        }
        else cout << R << endl;
    }
}

