#include <bits/stdc++.h>
using namespace std;

int n, x, lienThong = 0;
vector<vector<int>> res;
vector<vector<int>> e;
vector<int> vs;

void dfs(int u) {
    res[lienThong].push_back(u);
    vs[u] = 1;
    for (int i = 0; i < e[u].size(); ++i) {
        int v = e[u][i];
        if (vs[v] == 0) {
            dfs(v);
        }
    }
}

int main() {
    cin >> n;
    e.resize(n + 1);
    vs.resize(n + 1, 0);
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j) {
            int x; cin >> x;
            if (x == 1) e[i].push_back(j);
        }
    }
    for (int i = 1; i <= n; ++i) {
        if (vs[i] == 0) {
            res.resize(lienThong + 1);
            dfs(i);
            lienThong++;
        }
    }
    for (int i = 0; i < res.size(); ++i) {
        cout << "Thanh phan lien thong " << i + 1 << endl;
        for (int j : res[i]) {
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}