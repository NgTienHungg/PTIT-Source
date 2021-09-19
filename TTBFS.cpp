// https://luyencode.net/problem/TTBFS
// TTBFS - Minh họa thuật toán BFS

#include <bits/stdc++.h>
using namespace std;

void BFS(int st, vector<vector<int>> edge, vector<bool> &visited) {
    queue<int> q;
    q.push(st);
    visited[st] = 1;

    while (!q.empty()) {
        int u = q.front();
        q.pop();
        cout << u << endl;

        for (int i = 0; i < edge[u].size(); ++i) {
            int v = edge[u][i];
            if (!visited[v]) {
                visited[v] = 1;
                q.push(v);
            }
        }
    }

}

int main() {
    int n, m;
    cin >> n >> m;
    vector<vector<int>> edge(n + 1);
    vector<bool> visited(n + 1, 0);
    for (int i = 1; i <= m; ++i) {
        int u, v;
        cin >> u >> v;
        edge[u].push_back(v);
        edge[v].push_back(u);
    }

    for (int i = 1; i <= n; ++i) {
        sort(edge[i].begin(), edge[i].end());
    }

    // Test có thể có nhiều hơn 1 đồ thị
    for (int i = 1; i <= n; ++i) {
        if (!visited[i]) {
            BFS(i, edge, visited);
        }
    }
    return 0;
}