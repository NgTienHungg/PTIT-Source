#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e9 + 7;

void TestCase() {
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int &x : a) cin >> x;

    vector<int> f(k + 1, 0); f[0] = 1;
    for (int i = 1; i <= k; ++i) {
        for (int j = 0; j < n; ++j) {
            if (i >= a[j]) f[i] = (f[i] + f[i - a[j]]) % MOD;
        }
    }
    cout << f[k];
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