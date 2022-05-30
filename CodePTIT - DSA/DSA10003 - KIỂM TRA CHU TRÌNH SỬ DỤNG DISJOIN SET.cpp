// https://code.ptit.edu.vn/student/question/DSA10003
// KIỂM TRA CHU TRÌNH SỬ DỤNG DISJOIN SET

#include <bits/stdc++.h>
using namespace std;

int n, m, u, v, OK;
vector<vector<int>> G;
vector<int> vs;

void DFS(int u, int pre) {
    if (OK) return;

    vs[u] = 1;
    for (int v : G[u]) {
        if (vs[v] == 1 && v != pre) {
            OK = 1;
            return;
        }
        if (vs[v] == 0) {
            DFS(v, u);
        }
    }
}

void TestCase() {
    OK = false;
    cin >> n >> m;
    G.assign(n + 1, {});
    vs.assign(n + 1, 0);
    while (m--) {
        cin >> u >> v;
        G[u].push_back(v);
        G[v].push_back(u);
    }
    for (int i = 1; i <= n; ++i) {
        if (!vs[i]) {
            DFS(i, 0);
        }
        if (OK) break;
    }
    cout << (OK ? "YES" : "NO");
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