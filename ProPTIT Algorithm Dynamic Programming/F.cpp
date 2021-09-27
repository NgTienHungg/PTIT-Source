// https://codeforces.com/group/eFlt2UuXYv/contest/345055/problem/F
// F. Bậc thang

#include <bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;

void TestCase() {
    int n, k;
    cin >> n >> k;
    vector<long long> f(n + 1, 1);
    f[0] = 0;
    long long sum = 1;
    for (int i = 2; i <= k; ++i) {
        f[i] += sum;
        f[i] %= mod;
        sum += f[i];
        sum %= mod;
    }
    for (int i = k + 1; i <= n; ++i) {
        sum -= f[i - k - 1];
        if (sum < 0)
            sum += mod;

        f[i] = sum;
        f[i] %= mod;
        sum += f[i];
        sum %= mod;
    }
    cout << f[n] << "\n";
}

int main() {
    ios_base::sync_with_stdio(0);
    int T;
    cin >> T;
    while (T--) {
        TestCase();
    }
    return 0;
}