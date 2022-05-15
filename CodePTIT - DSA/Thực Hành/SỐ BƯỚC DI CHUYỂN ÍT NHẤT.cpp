#include <bits/stdc++.h>
#define II pair<int, int>
using namespace std;

int a[1005][1005];
int res[1005][1005];

void TestCase() {
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> a[i][j];
            res[i][j] = INT_MAX;
        }
    }
    queue<II> q;
    q.push({0, 0});
    res[0][0] = 0;
    while (!q.empty()) {
        int r = q.front().first;
        int c = q.front().second;
        q.pop();
        if (r == n - 1 and c == m - 1) {
            cout << res[r][c];
            return;
        }
        int i, j;
        if (r + 1 < n) {
            i = r + abs(a[r][c] - a[r + 1][c]), j = c;
            if (i < n and res[i][j] == INT_MAX) {
                res[i][j] = res[r][c] + 1;
                q.push({i, j});
            }
        }
        if (c + 1 < m) {
            i = r, j = c + abs(a[r][c] - a[r][c + 1]);
            if (j < m and res[i][j] == INT_MAX) {
                res[i][j] = res[r][c] + 1;
                q.push({i, j});
            }
        }
        if (r + 1 < n and c + 1 < m) {
            i = r + abs(a[r][c] - a[r + 1][c + 1]);
            j = c + abs(a[r][c] - a[r + 1][c + 1]);
            if (i < n and j < m and res[i][j] == INT_MAX) {
                res[i][j] =  res[r][c] + 1;
                q.push({i, j});
            }
        }
    }
    cout << -1;
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