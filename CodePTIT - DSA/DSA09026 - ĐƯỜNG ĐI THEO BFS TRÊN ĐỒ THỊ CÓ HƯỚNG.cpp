// https://code.ptit.edu.vn/student/question/DSA09026
// ĐƯỜNG ĐI THEO BFS TRÊN ĐỒ THỊ CÓ HƯỚNG

#include <bits/stdc++.h>
using namespace std;

int V, E, s, t, u, v;
vector<vector<int>> G;
vector<int> tr; // trace
vector<bool> vs; // visit

void bfs(int s) {
    queue<int> q;
    q.push(s);
    vs[s] = true;

    while (!q.empty()) {
        u = q.front(); q.pop();
        if (u == t) return;

        for (int v : G[u]) {
            if (vs[v] == false) {
                q.push(v);
                vs[v] = true;
                tr[v] = u;
            }
        }
    }
}

void trace() {
    if (vs[t] == false) {
        cout << -1;
        return;
    }
    stack<int> way;
    int last = t;
    while (last != -1) {
        way.push(last);
        last = tr[way.top()];
    }
    while (!way.empty()) {
        cout << way.top() << " ";
        way.pop();
    }
}

void testCase() {
    cin >> V >> E >> s >> t;
    G.clear(); G.resize(V + 1);
    vs.clear(); vs.resize(V + 1, 0);
    tr.clear(); tr.resize(V + 1, -1);
    while (E--) {
        cin >> u >> v;
        G[u].push_back(v);
    }
    bfs(s);
    trace();
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