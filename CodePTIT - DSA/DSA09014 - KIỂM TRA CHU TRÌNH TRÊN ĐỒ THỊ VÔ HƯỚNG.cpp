// https://code.ptit.edu.vn/student/question/DSA09014
// KIỂM TRA CHU TRÌNH TRÊN ĐỒ THỊ VÔ HƯỚNG

#include <bits/stdc++.h>
using namespace std;

int V, E, u, v, pre, OK;
vector<vector<int>> G;
vector<int> vs;

void bfs(int s) {
    queue<pair<int, int>> q;
    q.push({s, 0});
    vs[s] = 1;

    while (!q.empty()) {
        u = q.front().first;
        pre = q.front().second;
        q.pop();

        for (int v : G[u]) {
            if (vs[v] == 1 && v != pre) {
                OK = 1;
                return;
            }
            if (vs[v] == 0) {
                vs[v] = 1;
                q.push({v, u});
            }
        }
    }
}

void TestCase() {
    OK = 0;
    cin >> V >> E;
    G.clear(); G.resize(V + 1);
    vs.clear(); vs.resize(V + 1, 0);
    while (E--) {
        cin >> u >> v;
        G[u].push_back(v);
        G[v].push_back(u);
    }

    for (int i = 1; i <= V; ++i) {
        if (!vs[i]) {
            bfs(i);
        }
        if (OK) break;
    }
    cout << (OK ? "YES" : "NO");
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int T; cin >> T;
    while (T--) {
        TestCase();
        cout << endl;
    }
    return 0;
}

// 1
// 5 6
// 1 2 1 3 1 5 2 5 3 4 4 5