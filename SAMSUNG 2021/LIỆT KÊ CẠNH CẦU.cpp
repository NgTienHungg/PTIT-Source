#include <bits/stdc++.h>
using namespace std;

int V, E, u, v, x, y, lien_thong;
vector<vector<int>> G;
vector<pair<int, int>> Edge;
vector<bool> Vs;

void bfs(int S) {
    queue<int> q;
    q.push(S);
    Vs[S] = 1;

    while (!q.empty()) {
        u = q.front(); q.pop();

        for (int i = 0; i < G[u].size(); ++i) {
            v = G[u][i];
            if ((u == x && y == v) || (u == y && v == x))
                continue;
            if (!Vs[v]) {
                q.push(v);
                Vs[v] = 1;
            }
        }
    }
}

void canh_cau() {
    Vs.clear(); Vs.resize(V + 1, 0);
    int cou = 0;
    for (int i = 1; i <= V; ++i) {
        if (!Vs[i]) {
            bfs(i);
            cou++;
        }
    }
    if (cou > lien_thong) {
        cout << x << " " << y << " ";
    }
}

void TestCase() {
    lien_thong = 0;
    cin >> V >> E;
    G.clear(); G.resize(V + 1);
    Edge.clear(); Edge.resize(E + 1);
    Vs.clear(); Vs.resize(V + 1, 0);

    for (int i = 1; i <= E; ++i) {
        cin >> u >> v;
        if (u > v) swap(u, v);
        Edge[i].first = u, Edge[i].second = v;

        G[u].push_back(v);
        G[v].push_back(u);
    }
    for (int i = 1; i <= V; ++i) {
        if (!Vs[i]) {
            bfs(i);
            lien_thong++;
        }
    }

    for (int i = 1; i <= E; ++i) {
        x = Edge[i].first;
        y = Edge[i].second;
        canh_cau();
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T; cin >> T;
    while (T--) {
        TestCase();
        cout << endl;
    }
    return 0;
}