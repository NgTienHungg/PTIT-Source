#pragma GCC optimize("O2")
#include <bits/stdc++.h>
using namespace std;

int n;
vector<int> a, b, vs;

void solve() {
    for (int i = 1; i <= n; ++i) {
        cout << a[b[i]] << " ";
    }
    cout << endl;
}

void Try(int i) {
    for (int j = 1; j <= n; ++j) {
        if (!vs[j]) {
            b[i] = j;
            vs[j] = 1;
            if (i == n)
                solve();
            else
                Try(i + 1);
            vs[j] = 0;
        }
    }
}

void TestCase() {
    cin >> n;
    a.resize(n + 1);
    b.resize(n + 1);
    vs.clear(); vs.resize(n + 1, 0);
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

    int T = 1;
    // cin >> T;
    while (T--) {
        TestCase();
        cout << endl;
    }
    return 0;
}