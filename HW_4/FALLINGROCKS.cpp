#include <bits/stdc++.h>
using namespace std;

string mark[1001];
int dp[1001][1001];
int W, H;

int main() {
    cin >> W >> H;
    for (int i = 1; i <= H; i++) {
        cin >> mark[i];
        mark[i] = "#" + mark[i];
    }
    for (int j = 1; j <= W; j++)
        if (mark[1][j] == 'Y') {
            dp[1][j] = 1;
            break;
        }
    for (int i = 2; i <= H; i++){
        for (int j = 1; j <= W; j++) {
            if (mark[i][j] == 'E' && mark[i - 1][j] != 'R')
                dp[i][j] = dp[i - 1][j] | dp[i - 1][j - 1] | dp[i - 1][j + 1];
        }
    }
    for (int j = 1; j <= W; j++)
        if (dp[H][j] != 0) {
            cout << "YES";
            return 0;
        }
    cout << "NO";
}
