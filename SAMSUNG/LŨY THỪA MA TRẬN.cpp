#pragma GCC optimize("O2")
#include <bits/stdc++.h>
using namespace std;

int n, k;
long long a[11][11], d[11][11];
const int mod = 1e9 + 7;

void Mul(long long a[11][11], long long b[11][11]) {
    long long c[11][11] = {0};
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j) {
            for (int k = 1; k <= n; ++k) {
                c[i][j] += a[i][k] * b[k][j];
                c[i][j] %= mod;
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
    if (k % 2 == 1) {
        Mul(a, d);
    }
}

void TestCase() {
    cin >> n >> k;
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j) {
            cin >> a[i][j];
            d[i][j] = a[i][j];
        }
    }
    Pow(a, k);
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T;
    cin >> T;
    while (T--) {
        TestCase();
        cout << endl;
    }
    return 0;
}