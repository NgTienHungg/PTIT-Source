// https://code.ptit.edu.vn/student/question/DSA09024
// BFS TRÊN ĐỒ THỊ CÓ HƯỚNG

#include <bits/stdc++.h>
using namespace std;

int V, E, u, v, x, y;
vector<vector<int>> G;
vector<bool> vs;

void bfs(int u) {
    queue<int> q;
    q.push(u);

    while (!q.empty()) {
        int u = q.front(); q.pop();
        if (vs[u] == false) {
            cout << u << " ";
            vs[u] = true;
        }

        for (int v : G[u]) {
            if (vs[v] == false) {
                q.push(v);
            }
        }
    }
}

void testCase() {
    cin >> V >> E >> u;
    G.clear(); G.resize(V + 1);
    vs.clear(); vs.resize(V + 1, 0);
    while (E--) {
        cin >> x >> y;
        G[x].push_back(y);
    }
    bfs(u);
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