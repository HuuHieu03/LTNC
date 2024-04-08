#include <bits/stdc++.h>
using namespace std;

int n;
vector <int> vec;
int q, y;

int main() {
    cin >> n;
    int a;
    for (int i = 1; i <=n ; i++) {
        cin >> a;
        vec.push_back(a);
    }
    cin >> q;
    while (q--) {
        cin >> y;
        auto vt = lower_bound(vec.begin(), vec.end(), y);
        if (vec[vt - vec.begin()] != y || vt - vec.begin() >= n) cout << "No" << ' ' << vt - vec.begin() + 1  << endl;
        else cout << "Yes" << ' ' << vt - vec.begin() + 1 << endl;
    }

}
