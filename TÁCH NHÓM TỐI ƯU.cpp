#pragma GCC optimize("O2")
#include <bits/stdc++.h>
using namespace std;

void TestCase() {
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    sort(a.begin(), a.end());

    int last = a[0], ans = 1;
    for (int i = 1; i < n; ++i) {
        if (a[i] > last + k)
            ans++;
        last = a[i];
    }
    cout << ans;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T = 1;
    // cin >> T;
    while (T--) {
        TestCase();
        cout << endl;
    }
    return 0;
}