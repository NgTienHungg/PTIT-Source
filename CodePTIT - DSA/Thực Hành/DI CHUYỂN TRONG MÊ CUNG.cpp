#include <bits/stdc++.h>
using namespace std;

const int dr[4] = {-1, 0, 0, 1};
const int dc[4] = {0, -1, 1, 0};
const string ds[4] = {"U", "L", "R", "D"};

int n, a[10][10];
vector<string> res;

void Try(int i, int j, string s) {
    if (i == n and j == n) {
        res.push_back(s);
        return;
    }
    for (int k = 0; k < 4; ++k) {
        int x = i + dr[k];
        int y = j + dc[k];
        if (x >= 1 and x <= n and y >= 1 and y <= n and a[x][y] == 1) {
            a[x][y] = 0;
            Try(x, y, s + ds[k]);
            a[x][y] = 1;
        }
    }
}

void testCase() {
    res.clear();
    cin >> n;
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j) {
            cin >> a[i][j];
        }
    }
    a[1][1] = 0;
    Try(1, 1, "");
    if (res.empty()) cout << -1;
    else {
        sort(res.begin(), res.end());
        cout << res.size() << " ";
        for (string i : res) cout << i << " ";
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