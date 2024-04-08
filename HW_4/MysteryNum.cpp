#include <bits/stdc++.h>
using namespace std;

int n;
int a, b[10001];
int cnt1[10001], cnt2[10001];

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a;
        cnt1[a]++;
    }
    for (int i = 0; i <= n; i++) {
        cin >> b[i];
        cnt2[b[i]]++;
    }
    for (int i = 0; i <= n; i++) {
        if (cnt1[b[i]] != cnt2[b[i]]) {
            cout << b[i];
            break;
        }
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}

