// https://code.ptit.edu.vn/student/question/DSA09013
// LIỆT KÊ CẠNH CẦU

#include <bits/stdc++.h>
using namespace std;

int V, E, u, v, x, y, lthong;
vector<vector<int>> gr;
vector<pair<int, int>> ed;
vector<bool> vs;

void bfs(int start) {
    queue<int> q;
    q.push(start);
    
    while (!q.empty()) {
        u = q.front(); q.pop();
        vs[u] = true;

        for (int v : gr[u]) {
            if ((u == x && v == y) || (u == y && v == x))
                continue;
            if (!vs[v]) {
                q.push(v);
            }
        }
    }
}

void canhCau() {
    vs.clear(); vs.resize(V + 1, false);
    int new_lthong = 0;
    for (int i = 1; i <= V; ++i) {
        if (!vs[i]) {
            bfs(i);
            new_lthong++;
        }
    }
    if (new_lthong > lthong) {
        cout << x << " " << y << " ";
    }
}

void testCase() {
    lthong = 0;
    x = y = -1;
    cin >> V >> E;
    gr.clear(); gr.resize(V + 1);
    ed.clear(); ed.resize(E + 1);
    vs.clear(); vs.resize(V + 1, false);
    for (int i = 1; i <= E; ++i) {
        cin >> u >> v;
        ed[i] = {u, v};
        gr[u].push_back(v);
        gr[v].push_back(u);
    }
    for (int i = 1; i <= V; ++i) {
        if (!vs[i]) {
            bfs(i);
            lthong++;
        }
    }
    for (int i = 1; i <= E; ++i) {
        x = ed[i].first;
        y = ed[i].second;
        canhCau();
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