#include <bits/stdc++.h>
using namespace std;

int V, E, u, v;
vector<vector<int>> G;
vector<int> vs;

void BFS(int u) {
    queue<int> q;
    q.push(u);
    vs[u] = true;
    while (!q.empty()) {
        u = q.front(); q.pop();
        for (int v : G[u]) {
            if (!vs[v]) {
                q.push(v);
                vs[v] = true;
            }
        }
    }
}

void TestCase() {
    cin >> V >> E;
    G.assign(V + 1, {});
    while (E--) {
        cin >> u >> v;
        G[u].push_back(v);
        G[v].push_back(u);
    }
    int res = 0, lthong = 1;
    for (int i = 1; i <= V; ++i) {
        int cnt = 0;
        vs.assign(V + 1, false);
        vs[i] = true;
        for (int j = 1; j <= V; ++j) {
            if (!vs[j]) {
                BFS(j);
                cnt++;
            }
        }
        if (cnt > lthong) {
            lthong = cnt;
            res = i;
        }
    }
    cout << res;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int T = 1; cin >> T;
    while (T--) {
        TestCase();
        cout << "\n";
    }
    return 0;
}