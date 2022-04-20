#include <bits/stdc++.h>
using namespace std;

int a[1005][1005];
int res[1005][1005];

void testCase() {
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> a[i][j];
            res[i][j] = INT_MAX;
        }
    }
    queue<pair<int, int>> q;
    q.push({0, 0});
    res[0][0] = 0;
    while (!q.empty()) {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();
        if (x == n - 1 && y == m - 1) {
            cout << res[x][y];
            return;
        }
        int i, j;
        if (x + 1 < n) {
            i = x + abs(a[x][y] - a[x + 1][y]), j = y;
            if (i < n && res[i][j] == INT_MAX) {
                res[i][j] = res[x][y] + 1;
                q.push({i, j});
            }
        }
        if (y + 1 < m) {
            i = x, j = y + abs(a[x][y] - a[x][y + 1]);
            if (j < m && res[i][j] == INT_MAX) {
                res[i][j] = res[x][y] + 1;
                q.push({i, j});
            }
        }
        i = x + abs(a[x][y] - a[x + 1][y + 1]), j = y + abs(a[x][y] - a[x + 1][y + 1]);
        if (i < n && j < m && res[i][j] == INT_MAX) {
            res[i][j] = res[x][y] + 1;
            q.push({i, j});
        }
    }
    cout << -1;
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