// https://luyencode.net/problem/COMPCONN
// COMPCONN - Thành phần liên thông

#include <bits/stdc++.h>
using namespace std;

vector<int> BFS(int st, vector<vector<int>> edge, vector<bool> &visited) {
    vector<int> v;

    queue<int> q;
    q.push(st);
    visited[st] = 1;

    while (!q.empty()) {
        int u = q.front();
        q.pop();
        v.push_back(u);

        for (int i = 0; i < edge[u].size(); ++i) {
            int v = edge[u][i];
            if (!visited[v]) {
                visited[v] = 1;
                q.push(v);
            }
        }
    }

    sort(v.begin(), v.end());
    return v;
}

int main() {
    int n, m;
    cin >> n >> m;
    vector<vector<int>> edge(n + 1), res;
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

    for (int i = 1; i <= n; ++i) {
        if (!visited[i])
            res.push_back(BFS(i, edge, visited));
    }

    cout << res.size() << endl;
    for (int i = 0; i < res.size(); ++i) {
        cout << res[i].size() << " ";
        for (int j = 0; j < res[i].size(); ++j) {
            cout << res[i][j];
            if (j != res[i].size() - 1)
                cout << " ";
        }
        cout << endl;
    }
    return 0;
}