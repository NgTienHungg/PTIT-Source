// https://codeforces.com/group/eFlt2UuXYv/contest/343561/problem/C
// C. Bob và câu truyện thứ hạng trong lớp

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
        cout << edge[i].size() << endl;
    }
    return 0;
}