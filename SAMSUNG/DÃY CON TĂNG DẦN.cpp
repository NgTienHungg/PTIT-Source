#pragma GCC optimize("O2")
#include <bits/stdc++.h>
using namespace std;

int n, a[21], b[21];
vector<vector<int>> ans;

void solve() {
    vector<int> v;
    for (int i = 1; i <= n; ++i) {
        if (b[i] == 1)
            v.push_back(a[i]);
    }
    if (v.size() < 2) return;
    for (int i = 1; i < v.size(); ++i) {
        if (v[i] < v[i - 1])
            return;
    }
    ans.push_back(v);
}

void Try(int i) {
    for (int j = 0; j <= 1; ++j) {
        b[i] = j;
        if (i == n) solve();
        else Try(i + 1);
    }
}

bool cmp(vector<int> a, vector<int> b) {
    string s1 = "", s2 = "";
    for (auto x : a) {
        s1 += to_string(x) + " ";
    }
    for (auto x : b) {
        s2 += to_string(x) + " ";
    }
    return s1 < s2;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n;
    for (int i = 1; i <= n; ++i) {
        cin >> a[i];
    }

    Try(1);
    sort(ans.begin(), ans.end(), cmp);
    for (int i = 0; i < ans.size(); ++i) {
        for (int j = 0; j < ans[i].size(); ++j) {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}

// time