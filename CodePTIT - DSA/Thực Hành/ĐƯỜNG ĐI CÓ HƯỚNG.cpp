#include <bits/stdc++.h>
using namespace std;

int V, E, s, t, u, v;
vector<vector<int>> G;
vector<bool> vs;
vector<int> pre;

void BFS(int s) {
    queue<int> q;
    q.push(s);
    vs[s] = true;
    while (!q.empty()) {
        u = q.front(); q.pop();
        for (int v : G[u]) {
            if (!vs[v]) {
                q.push(v);
                vs[v] = true;
                pre[v] = u;
            }
        }
    }
}

void Trace(int t) {
    int last = t;
    stack<int> st;
    while (last != -1) {
        st.push(last);
        last = pre[last];
    }
    while (!st.empty()) {
        cout << st.top() << " ";
        st.pop();
    }
}

void TestCase() {
    cin >> V >> E >> s >> t;
    G.assign(V + 1, {});
    vs.assign(V + 1, false);
    pre.assign(V + 1, -1);
    while (E--) {
        cin >> u >> v;
        G[u].push_back(v);
    }
    BFS(s);
    if (!vs[t]) cout << -1;
    else Trace(t);
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