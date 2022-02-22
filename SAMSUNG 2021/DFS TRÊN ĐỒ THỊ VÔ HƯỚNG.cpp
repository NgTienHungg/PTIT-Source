#include <bits/stdc++.h>
using namespace std;

int V, E, Begin;
vector<vector<int>> G;
vector<bool> Vs;

void DFS() {
    stack<int> st;
    st.push(Begin);

    while (!st.empty()) {
        int u = st.top();
        st.pop();

        if (!Vs[u]) {
            cout << u << " ";
            Vs[u] = 1;
        }

        for (int i = 0; i < G[u].size(); ++i) {
            int v = G[u][i];
            if (!Vs[v]) {
                cout << v << " ";
                Vs[v] = 1;

                st.push(u);
                st.push(v);
                break;
            }
        }
    }
}

void TestCase() {
    cin >> V >> E >> Begin;
    G.clear(); G.resize(V + 1);
    Vs.clear(); Vs.resize(V + 1, 0);

    for (int i = 1; i <= E; ++i) {
        int x, y;
        cin >> x >> y;
        G[x].push_back(y);
        G[y].push_back(x);
    }
    for (int i = 1; i <= V; ++i) {
        sort(G[i].begin(), G[i].end());
    }

    DFS();
    cout << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T = 1; cin >> T;
    while (T--) {
        TestCase();
        cout << "\n";
    }
    return 0;
}