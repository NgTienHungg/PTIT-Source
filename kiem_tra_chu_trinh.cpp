#pragma GCC optimize("O2")
#include <bits/stdc++.h>
using namespace std;

int V, E, x, y, u, v;
vector<vector<int>> G;
vector<int> res;
vector<bool> Vs;

void BFS(int S) {
    Vs.clear(); Vs.resize(V + 1, 0);
    res.clear();

    queue<int> q;
    q.push(S);
    Vs[S] = 1;
    res.push_back(S);

    while (!q.empty()) {
        u = q.front(); q.pop();
        for (int i = 0; i < G[u].size(); ++i) {
            v = G[u][i];
            if (!Vs[v]) {
                q.push(v);
                res.push_back(v);
                Vs[v] = 1;
            }
        }
    }
}

void TestCase() {
    cin >> V >> E;
    G.clear(); G.resize(V + 1);
    for (int i = 1; i <= E; ++i) {
        cin >> x >> y;
        G[x].push_back(y);
        G[y].push_back(x);
    }

    for (int i = 1; i <= V; ++i) {
        BFS(i);
        int last = res.back();
        for (int j = 0; j < G[last].size(); ++j) {
            if (G[last][j] == i) {
                cout << "YES";
                return;
            }
        }
    }
    cout << "NO";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T;
    cin >> T;
    while (T--) {
        TestCase();
        cout << endl;
    }
    return 0;
}