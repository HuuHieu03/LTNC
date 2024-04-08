#include <bits/stdc++.h>
using namespace std;

int n, a, ma;
int cnt[10001];

int main() {
  cin >> n;
  for (int i = 1; i <= n; i++) {
      cin >> a;
      cnt[a]++;
      ma = max(ma, cnt[a]);
  }
    cout << n - ma;

}

