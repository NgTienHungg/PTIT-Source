// https://codeforces.com/group/eFlt2UuXYv/contest/343561/problem/E
// E. Kết bạn

#include <bits/stdc++.h>
using namespace std;

int BFS(int st, vector<vector<int>> edge, vector<bool> &visited) {
    vector<int> v;
    v.push_back(st);
    
    queue<int> q;
    q.push(st);
    visited[st] = 1;

    while (!q.empty()) {
        int a = q.front();
        q.pop();

        for (int i = 0; i < edge[a].size(); ++i) {
            int b = edge[a][i];
            if (!visited[b]) {
                visited[b] = 1;
                v.push_back(b);
                q.push(b);
            }
        }
    }
    return v.size();
}

int main() {
    ios_base::sync_with_stdio(0);
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

    int res = 0;
    for (int i = 1; i <= n; ++i) {
        if (!visited[i]) {
            res = max(res, BFS(i, edge, visited));
        }
    }
    cout << res;
    return 0;
}