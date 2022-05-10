// https://code.ptit.edu.vn/student/question/DSA09033
// MẠNG XÃ HỘI

#include <bits/stdc++.h>
using namespace std;

int n, m, u, v;
vector<vector<int>> G;
vector<bool> vs;

void DFS(int u) {
    vs[u] = true;
    for (int v : G[u]) {
        if (!vs[v]) {
            DFS(v);
        }
    }
}

void TestCase() {
    /* Kiểm tra đồ thị liên thông */
    cin >> n >> m;
    G.assign(n + 1, {});
    vs.assign(n + 1, false);
    for (int i = 1; i <= m; ++i) {
        cin >> u >> v;
        G[u].push_back(v);
        G[v].push_back(u);
    }
    DFS(1);
    for (int i = 2; i <= n; ++i) {
        if (!vs[i]) {
            cout << "NO";
            return;
        }
    }
    cout << "YES";
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