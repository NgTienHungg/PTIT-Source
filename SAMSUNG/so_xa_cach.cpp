#pragma GCC optimize("O2")
#include <bits/stdc++.h>
using namespace std;

int n;
vector<int> a, vs;

void solve() {
    string s(1, a[1] + '0');
    for (int i = 2; i <= n; ++i) {
        if (abs(a[i] - a[i - 1]) == 1)
            return;
        s += char(a[i] + '0');
    }
    cout << s << endl;
}

void Try(int i) {
    for (int j = 1; j <= n; ++j) {
        if (!vs[j]) {
            a[i] = j;
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
    vs.clear(); vs.resize(n + 1, 0);
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