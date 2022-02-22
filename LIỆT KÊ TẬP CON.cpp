#pragma GCC optimize("O2")
#include <bits/stdc++.h>
using namespace std;

int n, a[16];
string s;
set<string> res;

void solve() {
    string ans = "";
    for (int i = 0; i < n; ++i) {
        if (a[i] == 1) {
            ans += s[i];
        }
    }
    if (ans.length() > 0)
        res.insert(ans);
}

void Try(int i) {
    for (int j = 0; j <= 1; ++j) {
        a[i] = j;
        if (i == n - 1)
            solve();
        else
            Try(i + 1);
    }
}

void TestCase() {
    cin >> n;
    cin >> s;
    Try(0);
    for (auto x : res) {
        cout << x << " ";
    }
    cout << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T;
    cin >> T;
    while (T--) {
        TestCase();
    }
    return 0;
}