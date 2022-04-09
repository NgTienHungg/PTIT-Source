// https://code.ptit.edu.vn/student/question/DSA09011
// SỐ LƯỢNG HÒN ĐẢO

#include <bits/stdc++.h>
using namespace std;

int n, m, dem;
int a[501][501];
const int dx[8] = {-1, -1, -1, 0, 0, 1, 1, 1};
const int dy[8] = {-1, 0, 1, -1, 1, -1, 0, 1};

void dfs(int i, int j) {
    a[i][j] = 0;
    for (int k = 0; k < 8; ++k) {
        int x = i + dx[k];
        int y = j + dy[k];
        if (x >= 1 && x <= n && y >= 1 && y <= m && a[x][y] == 1) {
            dfs(x, y);
        }
    }
}

void testCase() {
    dem = 0;
    cin >> n >> m;
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= m; ++j) {
            cin >> a[i][j];
        }
    }
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= m; ++j) {
            if (a[i][j] == 1) {
                dem++;
                dfs(i, j);
            }
        }
    }
    cout << dem;
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