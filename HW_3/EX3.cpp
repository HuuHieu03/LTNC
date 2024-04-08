#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'timeConversion' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string timeConversion(string s) {
    if (s[8] == 'P') {
        if (s[0] == '1' && s[1] == '2') {
            s[0] = '1';
            s[1] = '2';
        }
        else {
            int n = 0;
            n += s[0] - int('0');
            n = n * 10 + (s[1] - int('0'));
            n += 12;
            s[1] = char(n % 10 + int('0'));
            n /= 10;
            s[0] = char(n + int('0'));
        }
    }
    else if(s[8] = 'A' && s[0] == '1' && s[1] == '2') {
        s[0] = '0';
        s[1] = '0';
    }
    s.erase(s.begin() + 8, s.begin() + 10);
    return s;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    fout << result << "\n";

    fout.close();

    return 0;
}

