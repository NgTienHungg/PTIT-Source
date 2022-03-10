// https://code.ptit.edu.vn/student/question/DSA09025
// ĐƯỜNG ĐI THEO DFS VỚI ĐỒ THỊ CÓ HƯỚNG

#include <bits/stdc++.h>
using namespace std;

int V, E, s, t, u, v;
vector<vector<int>> G;
vector<int> tr; // trace
vector<bool> vs; // visit

void dfs(int s) {
    stack<int> st;
    st.push(s);

    while (!st.empty()) {
        u = st.top(); st.pop();
        vs[u] = true;
        if (u == t) return;

        for (int v : G[u]) {
            if (vs[v] == false) {
                st.push(u);
                st.push(v);
                tr[v] = u;
                break;
            }
        }
    }
}

void trace() {
    if (vs[t] == false) {
        cout << -1;
        return;
    }
    stack<int> way;
    int last = t;
    while (last != -1) {
        way.push(last);
        last = tr[way.top()];
    }
    while (!way.empty()) {
        cout << way.top() << " ";
        way.pop();
    }
}

void testCase() {
    cin >> V >> E >> s >> t;
    G.clear(); G.resize(V + 1);
    vs.clear(); vs.resize(V + 1, 0);
    tr.clear(); tr.resize(V + 1, -1);
    while (E--) {
        cin >> u >> v;
        G[u].push_back(v);
    }
    dfs(s);
    trace();
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