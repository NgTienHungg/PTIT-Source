// https://code.ptit.edu.vn/student/question/DSA10005
// CHU TRÌNH EULER TRONG ĐỒ THỊ CÓ HƯỚNG

#include <bits/stdc++.h>
using namespace std;

int V, E, u, v;
vector<pair<int, int>> G;

void testCase() {
    cin >> V >> E;
    G.clear(); G.resize(V + 1);
    while (E--) {
        cin >> u >> v;
        G[u].first++;
        G[v].second++;
    }
    for (int i = 1; i <= V; ++i) {
        if (G[i].first != G[i].second) {
            cout << 0;
            return;
        }
    }
    cout << 1;
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