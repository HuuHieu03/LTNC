#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

int main() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        int t = n, ans = 0;
        while (t > 0) {
            if (t % 10 == 0) {
                t /= 10;
                continue;
            }
            if (n % (t % 10) == 0) ans++;
            t /= 10;
        }
        cout << ans << endl;
    }
}

