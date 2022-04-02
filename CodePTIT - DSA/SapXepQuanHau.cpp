#include <bits/stdc++.h>
using namespace std;

int a[10][10];
int vs[10] = {}, cc[20] = {}, cp[20] = {};
int res = 0, t = 1;

void Try(int i, int val) {
    for (int j = 1; j <= 8; ++j) {
        if (!vs[j] && !cc[i + j - 1] && !cp[i - j + 8]) {
            vs[j] = cc[i + j - 1] = cp[i - j + 8] = true;
            if (i == 8) {
                res = max(res, val + a[i][j]);
            } else {
                Try(i + 1, val + a[i][j]);
            }
            vs[j] = cc[i + j - 1] = cp[i - j + 8] = false;
        }
    }
}

void testCase() {
    res = 0;
    for (int i = 1; i <= 8; ++i) {
        for (int j = 1; j <= 8; ++j) {
            cin >> a[i][j];
        }
    }
    Try(1, 0);
    cout << "Test " << t << ": " << res;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int T = 1; cin >> T;
    while (T--) {
        testCase();
        cout << "\n";
        t++;
    }
    return 0;
}