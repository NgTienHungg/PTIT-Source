// https://code.ptit.edu.vn/student/question/DSA05024
// TỔNG BẰNG K

#include <bits/stdc++.h>
using namespace std;

int const MOD = 1e9 + 7;

void testCase() {
    int n, k;
    cin >> n >> k;
    vector<long long> a(n + 1);
    for (int i = 1; i <= n; ++i) {
        cin >> a[i];
    }

    vector<long long> f(k + 1, 0);
    f[0] = 1; // bai toan co so
    for (int i = 1; i <= k; ++i) {
        for (int j = 1; j <= n; ++j) {
            if (i >= a[j]) {
                f[i] += f[i - a[j]];
                f[i] %= MOD;
            }
        }
    }
    cout << f[k];
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