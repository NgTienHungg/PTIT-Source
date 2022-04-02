// https://code.ptit.edu.vn/student/question/DSA02019
// ĐƯỜNG ĐI DÀI NHẤT

#include <bits/stdc++.h>
using namespace std;

int n, m, u, v, res;
vector<vector<int>> G;
bool vs[20][20] = {};

void dfs(int u, int len) {
    res = max(res, len);
    for (int v : G[u]) {
        if (!vs[u][v]) {
            vs[u][v] = vs[v][u] = true;
            dfs(v, len + 1);
            vs[u][v] = vs[v][u] = false;
        }
    }
}

void testCase() {
    res = 0;
    cin >> n >> m;
    G.clear(); G.resize(20);
    while (m--) {
        cin >> u >> v;
        G[u].push_back(v);
        G[v].push_back(u);
    }
    for (int i = 0; i < n; ++i) {
        dfs(i, 0);
    }
    cout << res;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int T = 1; cin >> T;
    while (T--) {
        testCase();
        cout << "\n";
    }
    return 0;
}