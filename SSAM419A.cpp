// https://www.spoj.com/PTIT/problems/SSAM419A/
// SSAM419A - THUẬT TOÁN DFS

#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

void DFS(int u, vector<vector<int>> edge, vector<bool> &visited) {
    cout << u << " ";
    visited[u] = true;
    for (int i = 0; i < edge[u].size(); ++i) {
        if (!visited[edge[u][i]]) {
            DFS(edge[u][i], edge, visited);
        }
    }
}

void solve() {
    int n, m, u;
    cin >> n >> m >> u;
    vector<vector<int>> edge(n + 1);
    vector<bool> visited(n + 1, false);
    for (int i = 1; i <= m; ++i) {
        int a, b;
        cin >> a >> b;
        edge[a].push_back(b);
        edge[b].push_back(a);
    }
    DFS(u, edge, visited);
    cout << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}