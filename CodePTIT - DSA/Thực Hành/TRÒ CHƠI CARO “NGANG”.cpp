#include <bits/stdc++.h>
using namespace std;

int n;
char c;
string s;
vector<string> res;

void solve() {
    int maxX = 0, maxO = 0;
    for (int i = 0; i < s.length(); ++i) {
        if (s[i] == 'X') {
            int len = 1;
            while (i + 1 < s.length() && s[i + 1] == 'X') {
                len++;
                i++;
            }
            maxX = max(maxX, len);
        }
        else if (s[i] == 'O') {
            int len = 1;
            while (i + 1 < s.length() && s[i + 1] == 'O') {
                len++;
                i++;
            }
            maxO = max(maxO, len);
        }
    }
    if ((c == 'X' && maxX >= 5 && maxX > maxO) || (c == 'O' && maxO >= 5 && maxO > maxX))
        res.push_back(s);
}

void Try(int i) {
    for (int j = 0; j <= 1; ++j) {
        if (j == 0) s[i] = 'O';
        else s[i] = 'X';

        if (i == n - 1) solve();
        else Try(i + 1);
    }
}

void testCase() {
    cin >> n >> c;
    res.clear();
    s.resize(n);
    Try(0);
    for (string i : res) {
        cout << i << endl;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int T = 1; cin >> T;
    while (T--) {
        testCase();
        cout << "\n";
    }
    return 0;
}