#include <bits/stdc++.h>
using namespace std;

int n, u, v, lthong;
vector<vector<int>> G;
vector<int> vs;

void dfs(int s) {
    stack<int> st;
    st.push(s);
    vs[s] = 1;

    while (!st.empty()) {
        u = st.top();
        st.pop();

        for (int v : G[u]) {
            if (!vs[v]) {
                vs[v] = 1;
                st.push(u);
                st.push(v);
                break;
            }
        }
    }
}

bool checkDinhTru(int s) {
    vs.clear();
    vs.resize(n + 1, 0);
    vs[s] = 1;

    int dem = 0;
    for (int i = 1; i <= n; ++i) {
        if (!vs[i]) {
            dem++;
            dfs(i);
        }
    }
    return dem > lthong;
}

int main() {
    cin >> n;
    G.resize(n + 1);
    vs.resize(n + 1, 0);
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j) {
            cin >> u;
            if (u == 1) {
                G[i].push_back(j);
            }
        }
    }
    for (int i = 1; i <= n; ++i) {
        if (!vs[i]) {
            dfs(i);
            lthong++;
        }
    }
    for (int i = 1; i <= n; ++i) {
        if (checkDinhTru(i)) {
            cout << i << " ";
        }
    }
    return 0;
}