#include <bits/stdc++.h>
using namespace std;

struct Node {
    int u, v, w;
    Node(int u, int v, int w) {
        this->u = u;
        this->v = v;
        this->w = w;
    }
};

bool cmp(Node a, Node b) {
    if (a.w == b.w) {
        if (a.u == b.u) {
            return a.v < b.v;
        }
        return a.u < b.u;
    }
    return a.w < b.w;
}

void Prim(int n, int u, vector<Node> E) {
    int dH = 0;
    vector<pair<int, int>> T;
    vector<bool> vs(n + 1, false);
    vs[u] = true;

    sort(E.begin(), E.end(), cmp);
    while (T.size() < n - 1) {
        for (Node i : E) {
            if ((vs[i.u] && !vs[i.v]) || (!vs[i.u] && vs[i.v])) {
                dH += i.w;
                T.push_back({i.u, i.v});
                vs[i.u] = vs[i.v] = true;
                break;
            }
        }
    }
    
    cout << "dH = " << dH << endl;
    for (auto i : T) {
        cout << i.first << " " << i.second << endl;
    }
}

int main() {
    int n, u;
    cin >> n >> u;
    vector<Node> E;
    int a[100][100];
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j) {
            cin >> a[i][j];
            if (i < j && a[i][j] != 0) {
                E.push_back(Node(i, j, a[i][j]));
            }
        }
    }
    Prim(n, u, E);
    return 0;
}