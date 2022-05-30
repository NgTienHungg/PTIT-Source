// https://code.ptit.edu.vn/student/question/DSA10007
// CÂY KHUNG CỦA ĐỒ THỊ THEO THUẬT TOÁN BFS

#include <bits/stdc++.h>
using namespace std;

int n, m, start, u, v;
vector<vector<int>> G;
vector<pair<int, int>> tree;
vector<bool> vs;

void BfsTree(int start) {
    queue<int> q;
    q.push(start);
    vs[start] = true;

    while (!q.empty()) {
        u = q.front();
        q.pop();

        for (int v : G[u]) {
            if (!vs[v]) {
                tree.push_back({u, v});
                q.push(v);
                vs[v] = true;
            }
        }
    }
}

void Output() {
    if (tree.size() != n - 1) {
        cout << -1;
        return;
    }
    for (int i = 1; i <= n; ++i) {
        if (!vs[i]) {
            cout << -1;
            return;
        }
    }
    for (auto i : tree) {
        cout << i.first << " " << i.second << endl;
    }
}

void TestCase() {
    cin >> n >> m >> start;
    G.assign(n + 1, {});
    vs.assign(n + 1, false);
    tree.clear();

    while (m--) {
        cin >> u >> v;
        G[u].push_back(v);
        G[v].push_back(u);
    }
    BfsTree(start);
    Output();
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