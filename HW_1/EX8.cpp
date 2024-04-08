#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

int sum[10001];
int a[10001];
int n;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int sum[100001];
        int a[100001];
        int n;
        bool fl = 0;
        cin >> n;
        cin >> a[0];
        sum[0] = a[0];
        for (int i = 1; i < n; i++) {
            cin >> a[i];
            sum[i] = sum[i - 1] + a[i];
        }
        for (int i = 1 ;i < n; i++) {
            if (sum[i - 1] == sum[n - 1] - sum[i]) {
                fl = 1;
                break;
            }
        }
        if (sum[n - 1] - sum[0] == 0) fl = 1;
        if (fl == 1) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}

