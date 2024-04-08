#include <bits/stdc++.h>

using namespace std;

string s;
string temp = "hackerrank";
int T;

int main() {
    cin >> T;
    while (T--) {
//        cin.ignore();
        cin >> s;
//        cin.ignore();
        bool fl = 0;
        int i = 0, j = 0;
//        cout << s << ' ' << fl << i << j << '\n';
        while (i < s.size() && j < temp.size()) {
            if (s[i] == temp[j]) {
                j++;
            }
            i++;
            if (j == temp.size()) {
                fl = 1;
                break;
            }
        }

        if (fl == 1) cout << "YES" << '\n';
        else cout << "NO" << '\n';
    }
}

