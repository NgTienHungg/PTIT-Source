// https://codeforces.com/group/eFlt2UuXYv/contest/343561/problem/H
// H. DFS trên đồ thị vô hướng

#include <bits/stdc++.h>
using namespace std;

void DFS(int st, vector<vector<int>> edge, vector<bool> visited) {
    cout << st << " ";

    stack<int> stk;
    stk.push(st);
    visited[st] = 1;

    while (!stk.empty()) {
        int u = stk.top();
        stk.pop();

        for (int i = 0; i < edge[u].size(); ++i) {
            int v = edge[u][i];
            if (!visited[v]) {
                cout << v << " ";
                visited[v] = 1;
                stk.push(u);
                stk.push(v);
                break;
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
        edge[y].push_back(x);
    }
    for (int i = 1; i <= v; ++i) {
        sort(edge[i].begin(), edge[i].end());
    }
    DFS(st, edge, visited);
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