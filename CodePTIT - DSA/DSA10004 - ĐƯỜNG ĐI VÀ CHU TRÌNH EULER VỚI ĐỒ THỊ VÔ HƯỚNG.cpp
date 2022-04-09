// https://code.ptit.edu.vn/student/question/DSA10004
// ĐƯỜNG ĐI VÀ CHU TRÌNH EULER VỚI ĐỒ THỊ VÔ HƯỚNG

#include <bits/stdc++.h>
using namespace std;

int V, E, u, v;
vector<vector<int>> G;
vector<bool> vs;

void DFS(int s) {
    stack<int> st;
    st.push(s);
    vs[s] = true;
    while (!st.empty()) {
        u = st.top();
        st.pop();
        for (int v : G[u]) {
            if (!vs[v]) {
                st.push(u);
                st.push(v);
                vs[v] = true;
                break;
            }
        }
    }
}

void testCase() {
    cin >> V >> E;
    G.clear(); G.resize(V + 1);
    vs.clear(); vs.resize(V + 1, false);
    while (E--) {
        cin >> u >> v;
        G[u].push_back(v);
        G[v].push_back(u);
    }
    DFS(1);
    for (int i = 1; i <= V; ++i) {
        if (!vs[i]) {
            // đồ thị không liên thông
            cout << 0;
            return;
        }
    }
    int odd_deg = 0;
    for (int i = 1; i <= V; ++i) {
        odd_deg += (G[i].size() % 2 == 1);
    }
    if (odd_deg == 0)
        cout << 2;
    else if (odd_deg == 2)
        cout << 1;
    else
        cout << 0;
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