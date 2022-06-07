#include <bits/stdc++.h>
using namespace std;

int n, x, res = 0;
vector<vector<int>> e;
vector<int> vs;

void dfs(int u) {
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
            cin >> x;
            if (x == 1) e[i].push_back(j);
        }
    }
    for (int i = 1; i <= n; ++i) {
        if (vs[i] == 0) {
            dfs(i);
            res++;
        }
    }
    cout << res;
    return 0;
}