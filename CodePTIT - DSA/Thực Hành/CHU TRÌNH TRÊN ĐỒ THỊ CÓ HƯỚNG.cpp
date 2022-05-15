// 

#include <bits/stdc++.h>
using namespace std;

int V, E, s, t, u, v, ok;
vector<vector<int>> G;
vector<int> vs;

void DFS(int u) {
    if (ok) return;
    vs[u] = 1;
    for (int v : G[u]) {
        if (vs[v] == 0)
            DFS(v);
        else if (vs[v] == 1) {
            ok = 1;
            return;
        }
    }
    vs[u] = 2;
}

void TestCase() {
    ok = 0;
    cin >> V >> E;
    G.assign(V + 1, {});
    vs.assign(V + 1, 0);
    while (E--) {
        cin >> u >> v;
        G[u].push_back(v);
    }
    for (int i = 1; i <= V; ++i) {
        if (!vs[i] && !ok) {
            DFS(i);
        }
    }
    cout << (ok ? "YES" : "NO");
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