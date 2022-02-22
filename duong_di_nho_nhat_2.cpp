#include <bits/stdc++.h>
using namespace std;

int n, m, ans;
int a[501][501], vs[501][501];
const int X[4] = {-1, 0, 1, 0};
const int Y[4] = {0, 1, 0, -1};

void bfs(int i, int j, int val) {
    if (val >= ans) return;
    if (i == n && j == m) {
        ans = min(ans, val);
        return;
    }
    for (int k = 0; k < 4; ++k) {
        int x = i + X[k];
        int y = j + Y[k];
        if (x >= 1 && x <= n && y >= 1 && y <= m && !vs[x][y]) {
            vs[x][y] = 1;
            bfs(x, y, val + a[x][y]);
            vs[x][y] = 0;
        }
    }
}

void TestCase() {
    ans = INT_MAX; memset(vs, 0, sizeof(vs));
    cin >> n >> m;
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= m; ++j) {
            cin >> a[i][j];
        }
    }
    vs[1][1] = 1;
    bfs(1, 1, a[1][1]);
    cout << ans;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int T = 1; cin >> T;
    while (T--) {
        TestCase();
        cout << "\n";
    }
    return 0;
}

//! TLE