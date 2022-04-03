#include <bits/stdc++.h>
using namespace std;

int n, k, ans;
int hv[10], vs[10];
string a[10], b[10];

void solve() {
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < k; ++j) {
            b[i][j] = a[i][hv[j]];
        }
    }
    sort(b, b + n);
    int minn = stoi(b[0]);
    int maxx = stoi(b[n - 1]);
    ans = min(ans, maxx - minn);
}

void Try(int i) {
    for (int j = 0; j < k; ++j) {
        if (!vs[j]) {
            hv[i] = j;
            vs[j] = 1;
            if (i == k - 1) solve();
            else Try(i + 1);
            vs[j] = 0;
        }
    }
}

void testCase() {
    cin >> n >> k;
    ans = INT_MAX;
    memset(vs, 0, sizeof(vs));
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        b[i] = a[i];
    }
    Try(0);
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