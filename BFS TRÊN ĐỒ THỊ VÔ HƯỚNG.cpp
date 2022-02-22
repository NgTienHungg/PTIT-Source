#pragma GCC optimize("O2")
#include <bits/stdc++.h>
using namespace std;

int V, E, Begin;
vector<vector<int>> G;
vector<bool> Vs;

void BFS() {
    queue<int> q;
    q.push(Begin);
    Vs[Begin] = 1;

    while (!q.empty()) {
        int u = q.front();
        q.pop();
        cout << u << " ";

        for (int i = 0; i < G[u].size(); ++i) {
            int v = G[u][i];
            if (!Vs[v]) {
                q.push(v);
                Vs[v] = 1;
            }
        }
    }
}

void TestCase() {
    cin >> V >> E >> Begin;
    G.clear(); G.resize(V + 1);
    Vs.clear(); Vs.resize(V + 1, 0);

    for (int i = 1; i <= E; ++i) {
        int x, y;
        cin >> x >> y;
        G[x].push_back(y);
        G[y].push_back(x);
    }
    for (int i = 1; i <= V; ++i) {
        sort(G[i].begin(), G[i].end());
    }

    BFS();
    cout << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T;
    cin >> T;
    while (T--) {
        TestCase();
    }
    return 0;
}