#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;
    vector<int> a(n);
    for (auto &x : a) cin >> x;

    vector<long long> L(n), R(n);
    for (int i = 0; i < n; ++i) {
        L[i] = a[i];
        for (int j = 0; j < i; ++j) {
            if (a[j] < a[i])
                L[i] = max(L[i], L[j] + a[i]);
        }
    }
    for (int i = n - 1; i >= 0; --i) {
        R[i] = a[i];
        for (int j = n - 1; j > i; --j) {
            if (a[j] < a[i])
                R[i] = max(R[i], R[j] + a[i]);
        }
    }

    long long ans = 0;
    for (int i = 0; i < n; ++i) {
        ans = max(ans, L[i] + R[i] - a[i]);
    }
    cout << ans;
    return 0;
}