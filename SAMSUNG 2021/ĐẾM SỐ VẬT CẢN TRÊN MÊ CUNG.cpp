#include <bits/stdc++.h>
using namespace std;

const int X[4] = {-1, 0, 1, 0};
const int Y[4] = {0, 1, 0, -1};

int n, m, ans = 0;
vector<string> a;

void bfs(int i, int j) {
    a[i][j] = '.';
    for (int k = 0; k < 4; ++k) {
        int x = i + X[k];
        int y = j + Y[k];
        if (x >= 0 && x < n && y >= 0 && y < m && a[x][y] == '#') {
            bfs(x, y);
        }
    }
}

void TestCase() {
    cin >> n >> m;
    a.resize(n);
    for (string &x : a) cin >> x;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if (a[i][j] == '#') {
                ans++;
                bfs(i, j);
            }
        }
    }
    cout << ans;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T = 1;
    while (T--) {
        TestCase();
        cout << "\n";
    }
    return 0;
}