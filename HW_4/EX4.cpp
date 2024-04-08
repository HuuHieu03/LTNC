#include <bits/stdc++.h>
using namespace std;

vector <int> a[100001];

int main() {
    int n, q, k;
    cin >> n >> q;
    for (int i = 0; i < n; i++) {
        cin >> k;
        int c;
        for (int j = 0; j < k; j++) {
            cin >> c;
            a[i].push_back(c);
        }
    }
    int l, r;
    for (int i = 1; i <= q; i++) {
        cin >> l >> r;
        cout << a[l][r] << endl;
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}

