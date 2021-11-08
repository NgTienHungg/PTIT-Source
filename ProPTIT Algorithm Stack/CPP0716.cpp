// https://code.ptit.edu.vn/student/question/CPP0716
// ĐẾM SỐ CÁCH DI CHUYỂN

#include <bits/stdc++.h>
using namespace std;

int n, k, ans;
int a[21][21], vs[21][21];

void Try(int i, int j, int val) {
    if (i == n && j == n) {
        if (val == k) ans++;
        return;
    }
    if (val > k) return;

    if (i + 1 <= n && !vs[i + 1][j]) {
        vs[i + 1][j] = 1;
        Try(i + 1, j, val + a[i + 1][j]);
        vs[i + 1][j] = 0;
    }
    if (j + 1 <= n && !vs[i][j + 1]) {
        vs[i][j + 1] = 1;
        Try(i, j + 1, val + a[i][j + 1]);
        vs[i][j + 1] = 0;
    }
}

void TestCase() {
    memset(vs, 0, sizeof(vs));
    ans = 0;
    cin >> n >> k;
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j) {
            cin >> a[i][j];
        }
    }
    Try(1, 1, a[1][1]);
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

// test co a[i] = 0