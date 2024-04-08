
#include <bits/stdc++.h>
using namespace std;

int n, p;

int num_of_pages(int k) {
    if (k == 1) return 0;
    return k / 2;
}

int main() {
    cin >> n >> p;
    if (n % 2 == 0 && p % 2 != 0) p--;
    else if (n % 2 != 0 && p % 2 == 0) n--;
    int down = n - p;
    int up;
    if (p % 2 == 0) p++;
    up = p - 1;
    if (p == 0 || p == 1) up = 0;
    cout << num_of_pages(min(up, down));

}
