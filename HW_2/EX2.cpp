#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

int main() {
    int x1, x2, v1, v2;
    cin >> x1 >> v1 >> x2 >> v2;
    if (v1 < v2) {
        cout << "NO";
        return 0;
    }
    while (x1 < x2) {
        x1 += v1;
        x2 += v2;
    }
    if (x1 == x2) cout << "YES";
    else cout << "NO";
}

