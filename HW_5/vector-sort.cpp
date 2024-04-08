#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    vector <int> vec;
    cin >> n;
    int a;
    for (int i = 0; i < n; i++) {
        cin >> a;
        vec.push_back(a);
    }
    sort(vec.begin(), vec.end());
    for (int i = 0; i < n; i++)
        cout << vec[i] << ' ';
}
