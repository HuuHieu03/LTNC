#include <bits/stdc++.h>
using namespace std;

int n, x, a, b;
vector <int> vec;

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        int k;
        cin >> k;
        vec.push_back(k);
    }
    cin >> x >> a >> b;
    vec.erase(vec.begin() + x - 1);
    vec.erase(vec.begin() + a - 1, vec.begin() + b - 1);
    cout << vec.size() << endl;
    for (int i = 0; i < vec.size(); i++)
        cout << vec[i] << ' ';
}
