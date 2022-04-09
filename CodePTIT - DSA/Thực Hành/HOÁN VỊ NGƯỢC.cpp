#include <bits/stdc++.h>
using namespace std;

int n;
vector<int> a, vs;
vector<vector<int>> res;

void Try(int i) {
    for (int j = 1; j <= n; ++j) {
        if (!vs[j]) {
            a[i] = j;
            vs[j] = 1;
            if (i == n) res.push_back(a);
            else Try(i + 1);
            vs[j] = 0;
        }
    }
}

void testCase() {
    res.clear();
    cin >> n;
    a.resize(n + 1);
    vs.resize(n + 1, 0);
    Try(1);
    for (int i = res.size() - 1; i >= 0; --i) {
        for (int j = 1; j <= n; ++j) {
            cout << res[i][j];
        }
        if (i != 0) cout << ",";
    }
}

int main() {
    int T = 1; cin >> T;
    while (T--) {
        testCase();
        cout << "\n";
    }
    return 0;
}