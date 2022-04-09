#include <bits/stdc++.h>
using namespace std;

int n, minKc, ans;
int a[20][20], vs[20];
vector<int> way, path;

void Try(int ind, int cou, int val) {
    if (val + minKc * (n - cou + 1) >= ans)
        return;
    if (cou == n) {
        val += a[ind][1];
        if (val < ans) {
            ans = val;
            path = way;
        }
        return;
    }
    for (int i = 2; i <= n; ++i) {
        if (vs[i] == 0) {
            vs[i] = 1;
            way[cou] = i;
            Try(i, cou + 1, val + a[ind][i]);
            vs[i] = 0;
        }
    }
}

void testCase() {
    cin >> n;
    way.resize(n);
    path.resize(n);
    minKc = ans = INT_MAX;

    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j) {
            cin >> a[i][j];
            if (a[i][j] != 0) {
                minKc = min(minKc, a[i][j]);
            }
        }
    }

    vs[1] = 1;
    way[0] = 1;
    Try(1, 1, 0);

    cout << "(";
    for (int i = 0; i < path.size(); ++i) {
        cout << path[i] << ",";
    }
    cout << "1)\n" << ans;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int T = 1;
    while (T--) {
        testCase();
        cout << "\n";
    }
    return 0;
}

// 4
// 0 20 35 10
// 20 0 90 50
// 35 90 0 12
// 10 50 12 0