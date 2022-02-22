#include <bits/stdc++.h>
using namespace std;

int n, k, ans = 1e9;
int a[10], vs[10];
vector<string> v;

int to_int(string s) {
    int num = 0;
    for (int i = 0; i < k; ++i) {
        num = num * 10 + (s[i] - '0');
    }
    return num;
}

void solve() {
    vector<string> tmp(v.begin(), v.end());
    for (int j = 0; j < k; ++j) {
        for (int i = 0; i < n; ++i) {
            tmp[i][j] = v[i][a[j] - 1];
        }
    }
    sort(tmp.begin(), tmp.end());
    ans = min(ans, to_int(tmp[n - 1]) - to_int(tmp[0]));
}

void Try(int i) {
    for (int j = 1; j <= k; ++j) {
        if (!vs[j]) {
            a[i] = j;
            vs[j] = 1;
            if (i == k - 1) solve();
            else Try(i + 1);
            vs[j] = 0;
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n >> k;
    v.resize(n);
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }
    Try(0);
    cout << ans;
    return 0;
}