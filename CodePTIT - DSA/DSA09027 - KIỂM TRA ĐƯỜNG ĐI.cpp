// https://code.ptit.edu.vn/student/question/DSA09027
// KIỂM TRA ĐƯỜNG ĐI

#include <bits/stdc++.h>
using namespace std;

int V, E, Q, u, v, x, y;
vector<vector<int>> G;
vector<bool> vs;

void bfs(int start) {
    vs.clear(); vs.resize(V + 1, 0);
    queue<int> q;
    q.push(start);
    vs[start] = true;

    while (!q.empty()) {
        u = q.front(); q.pop();
        for (int v : G[u]) {
            if (vs[v] == false) {
                q.push(v);
                vs[v] = true;
            }
        }
    }
}

void testCase() {
    cin >> V >> E;
    G.clear(); G.resize(V + 1);
    for (int i = 1; i <= E; ++i) {
        cin >> u >> v;
        G[u].push_back(v);
        G[v].push_back(u);
    }
    cin >> Q;
    while (Q--) {
        cin >> x >> y;
        bfs(x);
        cout << (vs[y] ? "YES" : "NO") << endl;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int T = 1; cin >> T;
    while (T--) {
        testCase();
        cout << "\n";
    }
    return 0;
}