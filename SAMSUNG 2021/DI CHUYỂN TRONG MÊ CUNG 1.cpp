#pragma GCC optimize("O2")
#include <bits/stdc++.h>
using namespace std;

int n, a[11][11];
vector<string> v;

void BFS(int i, int j, string s) {
    if (i == n && j == n) {
        v.push_back(s);
        return;
    }
    if (i < n && a[i + 1][j] == 1)
        BFS(i + 1, j, s + 'D');
    if (j < n && a[i][j + 1] == 1)
        BFS(i, j + 1, s + 'R');
}

void TestCase() {
    v.clear();
    cin >> n;
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j) {
            cin >> a[i][j];
        }
    }
    
    if (a[1][1] == 0 || a[n][n] == 0) {
        cout << "-1\n";
        return;
    }
    BFS(1, 1, "");

    if (v.empty())
        cout << "-1\n";
    else {
        sort(v.begin(), v.end());
        for (auto x : v) {
            cout << x << " ";
        }
        cout << endl;
    }
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