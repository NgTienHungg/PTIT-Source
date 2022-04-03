#include <bits/stdc++.h>
using namespace std;

int n;
vector<int> a, b;
vector<vector<int>> res;

void solve() {
    if (b.size() < 2) return;
    vector<int> c(b.begin(), b.end());
    sort(c.begin(), c.end());
    if (b == c) res.push_back(b);
}

void Try(int i) {
    for (int j = 0; j <= 1; ++j) {
        if (j == 1) b.push_back(a[i]);
        if (i == n - 1) solve();
        else Try(i + 1);
        if (j == 1) b.pop_back();
    }
}

bool cmp(vector<int> a, vector<int> b) {
    string x = "", y = "";
    for (int i : a) x += to_string(i) + " ";
    for (int i : b) y += to_string(i) + " ";
    return x < y;
}

void testCase() {
    cin >> n;
    a.resize(n);
    for (int &i : a) cin >> i;
    Try(0);
    sort(res.begin(), res.end(), cmp);
    for (auto i : res) {
        for (int j : i) cout << j << " ";
        cout << endl;
    }
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