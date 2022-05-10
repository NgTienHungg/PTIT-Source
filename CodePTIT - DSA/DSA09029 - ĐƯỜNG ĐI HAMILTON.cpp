// https://code.ptit.edu.vn/student/question/DSA09029
// ĐƯỜNG ĐI HAMILTON

#include <bits/stdc++.h>
using namespace std;

int V, E, u, v, ok;
vector<vector<int>> G;
vector<bool> vs;

void DFS(int u, int count) {
    if (count == V) ok = true;
    if (ok) return;

    for (int v : G[u]) {
        if (!vs[v]) {
            vs[v] = true;
            DFS(v, count + 1);
            vs[v] = false;
        }
    }
}

void TestCase() {
    ok = 0;
    cin >> V >> E;
    G.assign(V + 100, {});
    for (int i = 1; i <= E; ++i) {
        cin >> u >> v;
        G[u].push_back(v);
        G[v].push_back(u);
    }
    for (int i = 1; i <= V; ++i) {
        vs.assign(V + 100, false);
        vs[i] = true;
        DFS(i, 1);
        if (ok) break;
    }
    cout << (ok ? 1 : 0);
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