#include <bits/stdc++.h>
using namespace std;

void TestCase() {
    int n; cin >> n;
    vector<long long> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    vector<int> L(n), R(n);
    L[0] = R[n - 1] = 1;
    for (int i = 1; i < n; ++i) {
        if (a[i] > a[i - 1]) L[i] = L[i - 1] + 1;
        else L[i] = 1;
    }
    for (int i = n - 2; i >= 0; --i) {
        if (a[i] > a[i + 1]) R[i] = R[i + 1] + 1;
        else R[i] = 1;
    }

    int ans = 0;
    for (int i = 0; i < n; ++i) {
        ans = max(ans, L[i] + R[i] - 1);
    }
    cout << ans;
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