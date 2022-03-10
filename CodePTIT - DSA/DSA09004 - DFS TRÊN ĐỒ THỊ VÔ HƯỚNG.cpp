// https://code.ptit.edu.vn/student/question/DSA09004
// DFS TRÊN ĐỒ THỊ VÔ HƯỚNG

#include <bits/stdc++.h>
using namespace std;

int V, E, u, v, x, y;
vector<vector<int>> G;
vector<bool> vs;

void dfs(int u) {
    stack<int> st;
    st.push(u);

    while (!st.empty()) {
        int u = st.top(); st.pop();
        if (vs[u] == false) {
            cout << u << " ";
            vs[u] = true;
        }

        for (int v : G[u]) {
            if (vs[v] == false) {
                st.push(u);
                st.push(v);
                break;
            }
        }
    }
}

void testCase() {
    cin >> V >> E >> u;
    G.clear(); G.resize(V + 1);
    vs.clear(); vs.resize(V + 1, 0);
    while (E--) {
        cin >> x >> y;
        G[x].push_back(y);
        G[y].push_back(x);
    }
    dfs(u);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int T = 1; cin >> T;
    while (T--) {
        testCase();
        cout << "\n";
    }
    return 0;
}