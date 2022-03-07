// https://code.ptit.edu.vn/student/question/DSA04024
// LŨY THỪA MA TRẬN 2

#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;
int n, k;
long long a[11][11], d[11][11];

void Mul(long long a[11][11], long long b[11][11]) {
    long long c[11][11] = {};
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j) {
            for (int k = 1; k <= n; ++k) {
                c[i][j] += a[i][k] * b[k][j];
                c[i][j] %= MOD;
            }
        }
    }
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j) {
            a[i][j] = c[i][j];
        }
    }
}

void Pow(long long a[11][11], int k) {
    if (k == 1) return;
    Pow(a, k / 2);
    Mul(a, a);
    if (k % 2 == 1) Mul(a, d);
}

void testCase() {
    cin >> n >> k;
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j) {
            cin >> a[i][j];
            d[i][j] = a[i][j];
        }
    }
    Pow(a, k);
    long long ans = 0;
    for (int i = 1; i <= n; ++i) {
        ans += a[i][n];
        ans %= MOD;
    }
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