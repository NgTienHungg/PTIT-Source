// https://codeforces.com/group/eFlt2UuXYv/contest/343561/problem/I
// I. BFS trên đồ thị có hướng

#include <bits/stdc++.h>
using namespace std;

void BFS(int st, vector<vector<int>> edge, vector<bool> visited) {
    queue<int> q;
    q.push(st);
    visited[st] = 1;

    while (!q.empty()) {
        int u = q.front();
        q.pop();
        cout << u << " ";

        for (int i = 0; i < edge[u].size(); ++i) {
            int v = edge[u][i];
            if (!visited[v]) {
                visited[v] = 1;
                q.push(v);
            }
        }
    }

}

void TestCase() {
    int v, e, st;
    cin >> v >> e >> st;
    vector<vector<int>> edge(v + 1);
    vector<bool> visited(v + 1, 0);
    for (int i = 1; i <= e; ++i) {
        int x, y;
        cin >> x >> y;
        edge[x].push_back(y);
    }
    for (int i = 1; i <= v; ++i) {
        sort(edge[i].begin(), edge[i].end());
    }
    BFS(st, edge, visited);
    cout << endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    int T;
    cin >> T;
    while (T--) {
        TestCase();
    }
    return 0;
}