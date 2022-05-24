// https://code.ptit.edu.vn/student/question/DSA10008
// DIJKSTRA

#include <bits/stdc++.h>
#define ll long long
#define II pair<int, int>
using namespace std;

int V, E, S, u, v, w;
vector<vector<II>> G;
vector<bool> vs;
vector<int> d;

struct cmp {
    bool operator() (pair<int, int> a, pair<int, int> b) {
        return a.second > b.second;
    }
};

void Dijkstra(int S) {
    priority_queue<II, vector<II>, cmp> q;
    q.push({S, 0});
    d[S] = 0;
    while (!q.empty()) {
        u = q.top().first, w = q.top().second;
        q.pop();
        vs[u] = true;
        for (II p : G[u]) {
            v = p.first;
            if (!vs[v]) {
                d[v] = min(d[v], w + p.second);
                q.push({v, d[v]});
            }
        }
    }
    for (int i = 1; i <= V; ++i) {
        cout << d[i] << " ";
    }
}

void TestCase() {
    cin >> V >> E >> S;
    G.assign(V + 1, {});
    vs.assign(V + 1, false);
    d.assign(V + 1, INT_MAX);
    while (E--) {
        cin >> u >> v >> w;
        G[u].push_back({v, w});
        G[v].push_back({u, w});
    }
    Dijkstra(S);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int T = 1; cin >> T;
    while (T--) {
        TestCase();
        cout << endl;
    }
    return 0;
}