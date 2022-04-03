#include <bits/stdc++.h>
#define ll long long
using namespace std;

const int MOD = 1e9 + 7;

void testCase() {
    int n, k;
    cin >> n >> k;
    vector<ll> f(1e5 + 1, 0);
    ll tmp = 0;
    for (int i = 1; i <= k; ++i) {
        f[i] = (tmp + 1) % MOD;
        tmp = (tmp + f[i]) % MOD;
    }
    for (int i = k + 1; i <= n; ++i) {
        for (int j = 1; j <= k; ++j) {
            f[i] += f[i - j];
            f[i] %= MOD;
        }
    }
    cout << f[n];
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