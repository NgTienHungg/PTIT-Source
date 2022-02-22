#include <bits/stdc++.h>
using namespace std;

void TestCase() {
    string s; cin >> s;
    string r = s;
    reverse(r.begin(), r.end());

    int maxx = 0, f[101][101] = {0};
    for (int i = 1; i <= s.length(); ++i) {
        for (int j = 1; j <= r.length(); ++j) {
            if (s[i - 1] == r[j - 1])
                f[i][j] = f[i - 1][j - 1] + 1;
            else
                f[i][j] = max(f[i - 1][j], f[i][j - 1]);
            maxx = max(maxx, f[i][j]);
        }
    }
    cout << s.length() - maxx;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T; cin >> T;
    while (T--) {
        TestCase();
        cout << endl;
    }
    return 0;
}