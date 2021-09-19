// https://codeforces.com/group/eFlt2UuXYv/contest/343561/problem/B
// B. Bob và câu truyện cô bạn kề bên

#include <bits/stdc++.h>
using namespace std;

int main() {
    int v, e;
    cin >> v >> e;
    vector<vector<int>> edge(v + 1);
    for (int i = 1; i <= e; ++i) {
        int x, y;
        cin >> x >> y;
        edge[x].push_back(y);
        edge[y].push_back(x);
    }

    for (int i = 1; i <= v; ++i) {
        sort(edge[i].begin(), edge[i].end());
    }

    for (int i = 1; i <= v; ++i) {
        if (!edge[i].empty()) {
            cout << "Dinh ke cua " << i << " : ";
            for (int j = 0; j < edge[i].size(); ++j) {
                cout << edge[i][j] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}