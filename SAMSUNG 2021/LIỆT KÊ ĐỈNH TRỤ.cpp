#include <bits/stdc++.h>
using namespace std;

int V, E, u, v, lien_thong;
vector<vector<int>> G;
vector<bool> Vs;

void bfs(int S) {
    queue<int> q;
    q.push(S);
    Vs[S] = 1;

    while (!q.empty()) {
        u = q.front(); q.pop();

        for (int i = 0; i < G[u].size(); ++i) {
            v = G[u][i];
            if (!Vs[v]) {
                q.push(v);
                Vs[v] = 1;
            }
        }
    }
}

bool check(int S) {
    Vs.clear(); Vs.resize(V + 1, 0);
    Vs[S] = 1;

    // Đếm số liên thông khi bỏ qua không duyệt đỉnh S
    int cou = 0;
    for (int i = 1; i <= V; ++i) {
        if (!Vs[i]) {
            bfs(i);
            cou++;
        }
    }
    return cou > lien_thong;
}

void TestCase() {
    lien_thong = 0;
    cin >> V >> E;
    G.clear(); G.resize(V + 1);
    Vs.clear(); Vs.resize(V + 1, 0);

    for (int i = 1; i <= E; ++i) {
        cin >> u >> v;
        G[u].push_back(v);
        G[v].push_back(u);
    }
    for (int i = 1; i <= V; ++i) {
        if (!Vs[i]) {
            bfs(i);
            lien_thong++;
        }
    }

    for (int i = 1; i <= V; ++i) {
        if (check(i))
            cout << i << " ";
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