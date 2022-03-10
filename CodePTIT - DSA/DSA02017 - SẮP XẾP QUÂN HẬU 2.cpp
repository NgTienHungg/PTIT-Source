// https://code.ptit.edu.vn/student/question/DSA02017
// SẮP XẾP QUÂN HẬU 2

#include <bits/stdc++.h>
using namespace std;

int a[20][20], ans;
bool b[20], c[20], d[20];

void Try(int i, int sum) {
    for (int j = 1; j <= 8; ++j) {
        if (!b[j] && !c[i + j - 1] && !d[i - j + 8]) {
            b[j] = c[i + j - 1] = d[i - j + 8] = true;
            sum += a[i][j];
            if (i == 8)
                ans = max(ans, sum);
            else
                Try(i + 1, sum);
            sum -= a[i][j];
            b[j] = c[i + j - 1] = d[i - j + 8] = false;
        }
    }
}

void testCase() {
    ans = 0;
    for (int i = 1; i <= 8; ++i) {
        for (int j = 1; j <= 8; ++j) {
            cin >> a[i][j];
        }
    }
    Try(1, 0);
    cout << ans;
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