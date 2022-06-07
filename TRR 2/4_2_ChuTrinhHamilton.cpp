#include <bits/stdc++.h>
using namespace std;

int n, s, t, u, v;
vector<vector<int>> G;
vector<int> path;
vector<bool> vs;

void init() {
    cin >> n >> s;
    G.resize(n + 10);
    path.resize(n + 10);
    vs.resize(n + 10, false);
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j) {
            int x; cin >> x;
            if (x == 1) G[i].push_back(j);
        }
    }
}

void hamilton(int i) {
    int pre = path[i - 1];
    for (int t : G[pre]) {
        if (i == n + 1 and t == s) {
            for (int j = 1; j <= n; ++j) {
                cout << path[j] << " ";
            }
            cout << s << endl;
        } else if (!vs[t]) {
            vs[t] = true;
            path[i] = t;
            hamilton(i + 1);
            vs[t] = false;
        }
    }
}

void solve() {
    path[1] = s;
    vs[s] = true;
    hamilton(2);
}

void output() {

}

int main() {
    init();
    solve();
    output();
}