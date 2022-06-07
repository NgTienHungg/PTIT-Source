#include <bits/stdc++.h>
using namespace std;

int n, s, t, u, v;
vector<vector<int>> G;
vector<int> vs, trDFS, trBFS;

void dfs() {
    vs.resize(n + 1, 0);
    trDFS.resize(n + 1, -1);

    stack<int> st;
    st.push(s);
    vs[s] = 1;

    while (!st.empty()) {
        u = st.top();
        st.pop();

        for (int v : G[u]) {
            if (!vs[v]) {
                vs[v] = 1;
                trDFS[v] = u;
                st.push(u);
                st.push(v);
                break;
            }
        }
    }

    if (!vs[t]) {
        return; // no path
    }

    // trace dfs
    cout << "DFS path: ";
    int last = t;
    while (last != -1) {
        cout << last << "    ";
        last = trDFS[last];
    }
}

void bfs() {
    vs.resize(n + 1, 0);
    trBFS.resize(n + 1, -1);

    queue<int> q;
    q.push(s);
    vs[s] = 1;

    while (!q.empty()) {
        u = q.front();
        q.pop();

        for (int v : G[u]) {
            if (!vs[v]) {
                vs[v] = 1;
                trBFS[v] = u;
                q.push(v);
            }
        }
    }

    // trace bfs
    cout << "BFS path: ";
    int last = t;
    while (last != -1) {
        cout << last << "    ";
        last = trBFS[last];
    }
}

int main() {
    cin >> n >> s >> t;
    G.resize(n + 1);
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j) {
            cin >> u;
            if (u == 1) {
                G[i].push_back(j);
            }
        }
    }
    dfs();
    if (!vs[t]) {
        cout << "no path";
        return 0;
    }
    else {
        vs.clear();
        cout << endl;
    }
    bfs();
    return 0;
}