#include <bits/stdc++.h>
using namespace std;

int n;
vector<vector<int>> e;
vector<bool> vs;

void bfs(int start) {
    queue<int> q;
    q.push(start);
    cout << start << " ";
    vs[start] = true;

    while (!q.empty()) {
        int u = q.front();
        q.pop();

        for (int i = 0; i < e[u].size(); ++i) {
            int v = e[u][i];
            if (!vs[v]) {
                q.push(v);
                cout << v << " ";
                vs[v] = true;
            }
        }
    }
}

void solve() {
    cin >> n;
    e.resize(n + 1);
    vs.resize(n + 1, false);
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j) {
            int x; cin >> x;
            if (x == 1) e[i].push_back(j);
        }
    }
    bfs(1);
}

int main() {
    solve();
    return 0;
}

// 5
// 0 1 0 0 1 
// 1 0 1 1 1 
// 0 1 0 1 0 
// 0 1 1 0 1 
// 1 1 0 1 0 