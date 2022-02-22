#pragma GCC optimize("O2")
#include <bits/stdc++.h>
using namespace std;

int n, k;
vector<int> a, b;

void solve() {
    for (int i = 1; i <= k; ++i) {
        cout << a[b[i]] << " ";
    }
    cout << endl;
}

void Try(int i) {
    for (int j = b[i - 1] + 1; j <= n - k + i; ++j) {
        b[i] = j;
        if (i == k)
            solve();
        else
            Try(i + 1);
    }
}

void TestCase() {
    cin >> n >> k;
    a.resize(n + 1);
    b.resize(k + 1, 0);
    for (int i = 1; i <= n; ++i) {
        cin >> a[i];
    }
    sort(a.begin() + 1, a.end());
    Try(1);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T;
    cin >> T;
    while (T--) {
        TestCase();
        cout << endl;
    }
    return 0;
}