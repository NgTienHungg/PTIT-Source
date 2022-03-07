#include <bits/stdc++.h>
using namespace std;

int f[1001][1001];

void TestCase() {
    int n, res = 0;
    string s;
    cin >> n >> s;
    memset(f, 0, sizeof(f));
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j) {
            if (s[i - 1] == s[j - 1] && i != j)
                f[i][j] = f[i - 1][j - 1] + 1;
            else
                f[i][j] = max(f[i - 1][j], f[i][j - 1]);
            res = max(res, f[i][j]);
        }
    }
    cout << res;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T = 1; cin >> T;
    while (T--) {
        TestCase();
        cout << "\n";
    }
    return 0;
}