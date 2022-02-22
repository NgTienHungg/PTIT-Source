#include <bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;

void TestCase() {
    int n, k, a[1001];
    cin >> n >> k;
    for (int i = 1; i <= n; ++i) {
        cin >> a[i];
    }

    long long f[1001] = {0};
    f[0] = 1;
    for (int i = 1; i <= k; ++i) {
        for (int j = 1; j <= n; ++j) {
            if (i >= a[j]) {
                f[i] = (f[i] + f[i - a[j]]) % mod;
            }
        }
    }
    cout << f[k];
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T; cin >> T;
    while (T--) {
        TestCase();
        cout << endl;
    }
    return 0;
}