#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

int n,k;
int a[100001], cnt;

int main() {
    cin >> n >> k;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
        for (int j = i + 1; j < n; j++) {
            if ((a[i] + a[j]) % k == 00) {
                cnt++;
            }
        }
    cout << cnt;

}

