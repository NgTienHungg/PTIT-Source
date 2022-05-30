// https://code.ptit.edu.vn/student/question/TN05009
// CHU TRÌNH THEO DFS

#include <bits/stdc++.h>
using namespace std;

int n, m, u, v;
vector<vector<int>> G;
vector<int> ans;
vector<bool> vs;

void Dfs(int u, int pre, vector<int> path) {
    vs[u] = true;
    for (int v : G[u]) {
        if (v == 1 && v != pre && ans.empty()) {
            path.push_back(v);
            ans = path;
            return;
        }
        if (!vs[v]) {
            path.push_back(v);
            Dfs(v, u, path);
            path.pop_back();
        }
    }
}

void TestCase() {
    cin >> n >> m;
    G.assign(n + 1, {});
    vs.assign(n + 1, false);
    ans.clear();

    while (m--) {
        cin >> u >> v;
        G[u].push_back(v);
        G[v].push_back(u);
    }
    for (auto &i : G) {
        sort(i.begin(), i.end());
    }

    Dfs(1, -1, {1});
    if (ans.empty()) {
        cout << "NO";
    } else {
        for (int i : ans)
            cout << i << " ";
    }
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