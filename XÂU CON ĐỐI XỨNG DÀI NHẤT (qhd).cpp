#include <bits/stdc++.h>
using namespace std;

bool f[1000][1000];

void TestCase() {
    string s; cin >> s;
    memset(f, 0, sizeof(f));
    for (int i = 0; i < s.length(); ++i) {
        f[i][i] = 1;
    }

    int res = 1;
    for (int i = 0; i < s.length(); ++i) {
        for (int j = 0; j < i; ++j) {
            if (s[i] == s[j] && f[i - 1][j + 1] == 1) {
                f[i][j] = 1;
                res = max(res, i - j + 1);
            }
            else f[i][j] = 0;
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

// xâu con đối xứng dài nhất qhd nhưng đang sai