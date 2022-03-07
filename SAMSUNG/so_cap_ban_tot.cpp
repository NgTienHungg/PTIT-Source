#pragma GCC optimize("O2")
#include <bits/stdc++.h>
using namespace std;

void TestCase() {
    int n, k, ans = 0;
    cin >> n >> k;

    vector<string> v(n);
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }

    map<int, int> mp;
    for (int i = 0; i < n; ++i) {
        if (i > k) {
            string era = v[i - k - 1];
            mp[era.length()]--;
        }

        int l = v[i].length();
        mp[l]++;
        if (mp[l] > 1) {
            ans += mp[l] - 1;
        }
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