#include <bits/stdc++.h>
using namespace std;

int n, u, v, x, y, lthong;
vector<vector<int>> gr;
vector<pair<int, int>> ed;
vector<bool> vs;

void bfs(int s) {
    queue<int> q;
    q.push(s);
    
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
    vs.clear();
    vs.resize(n + 1, false);
    int dem = 0;
    for (int i = 1; i <= n; ++i) {
        if (!vs[i]) {
            bfs(i);
            dem++;
        }
    }
    if (dem > lthong) {
        cout << x << " " << y << endl;
    }
}

int main() {
    lthong = 0;
    x = y = -1;
    cin >> n;
    gr.resize(n + 1);
    vs.resize(n + 1);

    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j) {
            cin >> u;
            if (u == 1) {
                gr[i].push_back(j);
                if (j > i) {
                    ed.push_back({i, j});
                }
            }
        }
    }
    for (int i = 1; i <= n; ++i) {
        if (!vs[i]) {
            bfs(i);
            lthong++;
        }
    }
    for (int i = 0; i < ed.size(); ++i) {
        x = ed[i].first;
        y = ed[i].second;
        canhCau();
    }
    return 0;
}