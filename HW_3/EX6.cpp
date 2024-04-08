#include <bits/stdc++.h>
using namespace std;

string s;
int n, k;

int main() {
    cin >> n;
    cin >> s >> k;
    k = k % 26;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] >= 'a' && s[i] <= 'z') {
            if (int(s[i]) + k <= int('z')) s[i] = char(s[i] + k);
            else {
                s[i] = 'a' + (s[i] + k - 'z' - 1);
            }
        }
        else if (s[i] >= 'A' && s[i] <= 'Z') {
            if (char(s[i] + k) <= 'Z') s[i] = char(s[i] + k);
            else {
                s[i] = 'A' + (s[i] + k - 'Z' - 1);
            }
        }
    }
    cout << s;
}
