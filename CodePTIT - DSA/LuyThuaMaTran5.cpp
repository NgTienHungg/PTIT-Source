#include <bits/stdc++.h>
using namespace std;
#define ll long long

int n, k;
ll a[11][11], d[11][11];
const ll MOD = 1e9 + 7;

void Mul(ll a[11][11], ll b[11][11]) {
    ll c[11][11] = {};
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

void Pow(ll a[11][11], int k) {
    if (k == 1) return;
    Pow(a, k / 2);
    Mul(a, a);
    if (k % 2 == 1) {
        Mul(a, d);
    }
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
    ll ans = 0;
    for (int j = 1; j <= n; ++j) {
        ans += a[n][j];
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