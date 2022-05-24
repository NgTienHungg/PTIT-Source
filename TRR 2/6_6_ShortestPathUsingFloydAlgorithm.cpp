#include <bits/stdc++.h>
#define inf 1e9
#define null -1
using namespace std;

int n;
int a[100][100], d[100][100], nex[100][100];

void Init() {
    cin >> n;
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j) {
            cin >> a[i][j];
            if (i != j && a[i][j] == 0)
                a[i][j] = inf;
        }
    }
}

vector<int> ReconstructPath(int u, int v) {
    vector<int> path;
    path.push_back(u);
    while (u != v) {
        u = nex[u][v];
        path.push_back(u);
    }
    return path;
}

void Floyd() {
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j) {
            d[i][j] = a[i][j]; // đường đi ngắn nhất từ đỉnh i đến đỉnh j
            if (a[i][j] != 0)
                nex[i][j] = j;
            else
                nex[i][j] = null;
        }
    }
    for (int k = 1; k <= n; ++k) {
        for (int i = 1; i <= n; ++i) {
            for (int j = 1; j <= n; ++j) {
                if (d[i][j] > d[i][k] + d[k][j]) {
                    d[i][j] = d[i][k] + d[k][j];
                    nex[i][j] = nex[i][k];
                }
            }
        }
    }
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j) {
            cout << "K/c " << i << " -> " << j << " = " << d[i][j] << ";   ";
            vector<int> v = ReconstructPath(i, j);
            for (int l = 0; l < v.size(); ++l) {
                cout << v[l];
                if (l != v.size() - 1) {
                    cout << " --> ";
                }
            }
            cout << endl;
        }
        cout << endl;
    }
}

int main() {
    Init();
    Floyd();
    return 0;
}