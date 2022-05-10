// https://code.ptit.edu.vn/student/question/DSA09017
// KIỂM TRA ĐỒ THỊ CÓ PHẢI LÀ CÂY HAY KHÔNG

#include <bits/stdc++.h>
using namespace std;

int n, u, v;
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
    cin >> n;
    G.assign(n + 1, {});
    vs.assign(n + 1, false);
    for (int i = 1; i < n; ++i) {
        cin >> u >> v;
        G[u].push_back(v);
        G[v].push_back(u);
    }
    /* solution: Kiểm tra liên thông */
    DFS(1);
    for (int i = 1; i <= n; ++i) {
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