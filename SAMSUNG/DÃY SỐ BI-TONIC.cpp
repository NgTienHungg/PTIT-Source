#include <bits/stdc++.h>
using namespace std;

void TestCase() {
    int n; cin >> n;
    vector<int> a(n), l(n), r(n);
    for (int &x : a) cin >> x;

    for (int i = 0; i < n; ++i) {
        l[i] = a[i];
        for (int j = 0; j < i; ++j) {
            if (a[i] > a[j] && l[i] < l[j] + a[i]) {
                l[i] = l[j] + a[i];
            }
        }
    }
    for (int i = n - 1; i >= 0; --i) {
        r[i] = a[i];
        for (int j = n - 1; j > i; --j) {
            if (a[i] > a[j] && r[i] < r[j] + a[i]) {
                r[i] = r[j] + a[i];
            }
        }
    }

    int ans = 0;
    for (int i = 0; i < n; ++i) {
        ans = max(ans, r[i] + l[i] - a[i]);
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