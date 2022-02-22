#include <bits/stdc++.h>
using namespace std;

int V, E, Q, u, v, x, y;
vector<vector<int>> G;
vector<vector<bool>> ans;
vector<bool> use, Vs;

void dfs(int S) {
    Vs.clear(); Vs.resize(V + 1, 0);
    stack<int> st;
    st.push(S);
    
    while (!st.empty()) {
        u = st.top(); st.pop();
        Vs[u] = use[u] = 1;

        for (int i = 0; i < G[u].size(); ++i) {
            v = G[u][i];
            if (!Vs[v]) {
                Vs[v] = use[v] = 1;
                st.push(u);
                st.push(v);
                break;
            }
        }
    }
    ans.push_back(Vs);
}

void TestCase() {
    cin >> V >> E;
    G.clear(); G.resize(V + 1);
    use.clear(); use.resize(V + 1, 0);
    ans.clear();

    for (int i = 1; i <= E; ++i) {
        cin >> u >> v;
        if (u >= 1 && u <= V && v >= 1 && v <= V) {
            G[u].push_back(v);
            G[v].push_back(u);
        }
    }
    for (int i = 1; i <= V; ++i) {
        if (!use[i])
            dfs(i);
    }

    cin >> Q;
    while (Q--) {
        cin >> x >> y;
        if (u < 1 || u > V || v < 1 || v > V) {
            cout << "NO\n";
            continue;
        }
        for (int i = 0; i < ans.size(); ++i) {
            if (ans[i][x] == 1) {
                if (ans[i][y] == 1)
                    cout << "YES\n";
                else
                    cout << "NO\n";
                break;
            }
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T; cin >> T;
    while (T--) {
        TestCase();
        cout << endl;
    }
    return 0;
}