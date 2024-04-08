#include <iostream>
#include <cstdio>
using namespace std;

/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/

int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    cout << max(a, max(b, max(c, d)));
    return 0;
}

