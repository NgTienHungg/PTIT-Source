// https://codeforces.com/group/eFlt2UuXYv/contest/343561/problem/A
// A. BOB ALIICE và câu truyện sửa ông nước

#include <bits/stdc++.h>
#define faster() ios_base::sync_with_stdio(0)
using namespace std;

int V, E, ST, EN, maxW = 0;
vector<vector<pair<int, int>>> G;

void read() {
    cin >> V >> E >> ST >> EN;
    G.resize(V + 1);

    for (int i = 1; i <= E; ++i) {
        int x, y, z;
        cin >> x >> y >> z;
        G[x].push_back({y, z});
        G[y].push_back({x, z});
        maxW = max(maxW, z);
    }
}

bool BFS(int W) {
    vector<bool> vs(V + 1, 0);
    queue<int> q;
    q.push(ST);
    vs[ST] = 1;

    while (!q.empty()) {
        int u = q.front();
        q.pop();

        for (int i = 0; i < G[u].size(); ++i) {
            pair<int, int> p = G[u][i];
            if (!vs[p.first] && p.second <= W) {
                if (p.first == EN)
                    return 1;
                q.push(p.first);
                vs[p.first] = 1;
            }
        }
    }
    return 0;
}

void BSearch() {
    int l = 0, r = maxW;
    while (l < r) {
        int mid = (l + r) / 2;
        if (BFS(mid)) r = mid;
        else l = mid + 1;
    }

    if (BFS(r)) cout << r;
    else cout << -1;
}

int main() {
    faster();
    read();
    BSearch();
    return 0;
}