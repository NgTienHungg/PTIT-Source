#include <bits/stdc++.h>
using namespace std;

void testCase() {
    int n, k;
    cin >> n >> k;
    vector<string> s(300001);
    vector<vector<int>> f(300001, vector<int>(31, 0));
    for (int i = 1; i <= n; ++i) {
        cin >> s[i];
        f[i] = f[i - 1];
        f[i][s[i].length()]++;
    }
    long long ans = 0;
    for (int i = 1; i <= n; ++i) {
        ans += f[i - 1][s[i].size()] - f[max(i - k - 1, 0)][s[i].size()];
    }
    cout << ans;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int T = 1;
    while (T--) {
        testCase();
        cout << "\n";
    }
    return 0;
}

// 4 2
// NAM
// TAM
// THU
// HAI