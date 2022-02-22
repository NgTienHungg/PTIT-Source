#include <bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;

void TestCase() {
    int n, k;
    cin >> n >> k;
    vector<long long> f(1e5 + 1, 0);
    long long sum = 0;

    for (int i = 1; i <= k; ++i) {
        f[i] = (sum + 1) % mod;
        sum = (sum + f[i]) % mod;
    }
    for (int i = k + 1; i <= n; ++i) {
        for (int j = 1; j <= k; ++j) {
            f[i] = (f[i] + f[i - j]) % mod;
        }
    }
    cout << f[n];
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T = 1; cin >> T;
    while (T--) {
        TestCase();
        cout << "\n";
    }
    return 0;
}