#include <bits/stdc++.h>
using namespace std;

long long f[1001][1001];

void testCase() {
    string s; cin >> s;
    int n = s.length();
    for (int i = 0; i < n; ++i) {
        f[i][i] = 1;
    }
    int res = 1;
    for (int k = 1; k <= n; ++k) {
        for (int i = 0; i < n - k; ++i) {
            int j = i + k;
            if (s[i] == s[j] && k == 1) {
                f[i][j] = 1;
            } else if (s[i] == s[j] && k > 1) {
                f[i][j] = f[i + 1][j - 1];
            } else {
                f[i][j] = 0;
            }
            if (f[i][j]) {
                res = max(res, j - i + 1);
            }
        }
    }
    cout << res;
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

// 2
// 13731456
// 44444