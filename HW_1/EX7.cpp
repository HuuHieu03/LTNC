#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

float soam, soduong, so0;

int main() {
    int n;
    int a;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a;
        if (a < 0) soam++;
        else if (a > 0) soduong++;
        else if (a == 0) so0++;
    }
    cout << fixed << setprecision(6) << soduong / n << '\n' << soam / n << '\n' << so0 / n;
}

