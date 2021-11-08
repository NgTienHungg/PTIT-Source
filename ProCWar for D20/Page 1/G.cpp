#include <bits/stdc++.h>
using namespace std;

void TestCase() {
    int n, r, c, Maxx = -1;
    cin >> n;
    vector<vector<int>> a(n + 1, vector<int>(n + 1));
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j) {
            cin >> a[i][j];
            if (a[i][j] % 11 == 0 && a[i][j] > Maxx) {
                Maxx = a[i][j];
                r = i, c = j;
            }
        }
    }

    if (Maxx == -1) {
        cout << -1;
        return;
    }
    if (a[1][1] == Maxx) {
        cout << "";
        return;
    }

    string res(min(r, c) - 1, 'T');
    if (r > c)
        res = string(r - c, 'D') + res;
    else
        res = string(c - r, 'R') + res;
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