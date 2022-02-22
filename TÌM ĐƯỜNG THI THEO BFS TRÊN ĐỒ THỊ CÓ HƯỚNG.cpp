#include <bits/stdc++.h>
using namespace std;

int V, E, S, T, u, v;
vector<vector<int>> G;
vector<int> Tr;
vector<bool> Vs;

void bfs() {
    queue<int> q;
    q.push(S);
    Vs[S] = 1;

    while (!q.empty()) {
        u = q.front();
        q.pop();
        if (u == T) return;

        for (int i = 0; i < G[u].size(); ++i) {
            v = G[u][i];
            if (!Vs[v]) {
                q.push(v);
                Tr[v] = u;
                Vs[v] = 1;
            }
        }
    }
}

void trace() {
    if (!Vs[T]) {
        cout << -1;
        return;
    }
    
    stack<int> lst;
    lst.push(T);

    // Truy vết từ T
    int last = Tr[T];
    while (last != -1) {
        lst.push(last);
        last = Tr[lst.top()];
    }

    while (!lst.empty()) {
        cout << lst.top() << " ";
        lst.pop();
    }
}

void TestCase() {
    cin >> V >> E >> S >> T;
    G.clear(); G.resize(V + 1);
    Vs.clear(); Vs.resize(V + 1, 0);
    Tr.clear(); Tr.resize(V + 1, -1);

    for (int i = 1; i <= E; ++i) {
        cin >> u >> v;
        G[u].push_back(v);
    }
    for (int i = 1; i <= V; ++i) {
        sort(G[i].begin(), G[i].end());
    }

    bfs();
    trace();
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T = 1; cin >> T;
    while (T--) {
        TestCase();
        cout << endl;
    }
    return 0;
}