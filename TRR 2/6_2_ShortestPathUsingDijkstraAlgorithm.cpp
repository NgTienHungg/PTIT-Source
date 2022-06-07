#include <bits/stdc++.h>
#define II pair<int, int>
#define inf 1e9
using namespace std;

int n, s, u, v, w;
vector<vector<II>> G;
vector<int> d, truoc;
vector<bool> vs;

struct cmp {
    bool operator() (II a, II b) {
        return a.second > b.second;
    }
};

void Dijkstra(int s) {
    d[s] = 0, vs[s] = true;
    priority_queue<II, vector<II>, cmp> q;
    q.push({s, 0});

    while (!q.empty()) {
        u = q.top().first;
        w = q.top().second;
        q.pop();
        vs[u] = true;
        for (II p : G[u]) {
            v = p.first;
            if (!vs[v] && d[v] > w + p.second) {
                d[v] = w + p.second;
                truoc[v] = u;
                q.push({v, d[v]});
            }
        }
    }
}

void Output() {
    for (int i = 1; i <= n; ++i) {
        cout << "K/c " << s << " -> " << i << " = ";
        if (d[i] == inf) {
            cout << "INF;" << endl;
            continue;
        }
        cout << d[i] << ";       ";
        if (s == i) {
            cout << s << " <- " << s << endl;
            continue;
        }
        int prev = i;
        while (true) {
            cout << prev;
            prev = truoc[prev];
            if (prev == -1) break;
            else cout << " <- ";
        }
        cout << endl;
    }
}

int main() {
    cin >> n >> s;
    G.resize(n + 1, {});
    d.resize(n + 1, inf);
    truoc.resize(n + 1, -1);
    vs.resize(n + 1, false);
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j) {
            cin >> w;
            if (w != 0) {
                G[i].push_back({j, w});
            }
        }
    }
    Dijkstra(s);
    Output();
    return 0;
}