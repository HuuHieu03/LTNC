#include <bits/stdc++.h>
using namespace std;

int n, m;
int ma_a, mi_b = 10001;
int a[11], b[11];
int res;

int main() {
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        ma_a = max(ma_a, a[i]);
    }
    for (int i = 0; i < m; i++)
        cin >> b[i], mi_b = min(mi_b, b[i]);
    for (int i = ma_a; i <= mi_b; i += ma_a) {
        bool fl = 1;
        for (int j = 0; j < n; j++) {
            if (i % a[j] != 0) {
                fl = 0;
                break;
            }
        }
        if (fl == 0) continue;
        for (int j = 0; j < m; j++) {
            if (b[j] % i != 0) {
                fl = 0;
                break;
            }
        }
        if (fl == 1) res++;
    }
    cout << res;
}

