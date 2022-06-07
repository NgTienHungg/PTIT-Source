#include <bits/stdc++.h>
#define INF 1e6
using namespace std;

int n, s;
int a[100][100];
int d[100], truoc[100];

void BellmanFord(int s) {
    for (int i = 1; i <= n; ++i) {
        d[i] = a[s][i];
        truoc[i] = s;
    }
    d[s] = 0;

    for (int k = 1; k <= n - 2; ++k) {
        for (int v = 1; v <= n; ++v) {
            if (v != s) {
                for (int u = 1; u <= n; ++u) {
                    if ((d[v] > d[u] + a[u][v]) && d[u] != INF && a[u][v] != INF) {
                        d[v] = d[u] + a[u][v];
                        truoc[v] = u;
                    }
                }
            }
        }
    }

    for (int i = 1; i <= n; ++i) {
        cout << "K/c " << s << " -> " << i << " = ";
        if (d[i] == INF)
            cout << "INF;";
        else if (i == s) {
            cout << "0;        ";
            cout << s << " <- " << s;
        }
        else {
            cout << d[i] << ";        ";
            int x = i;
            while (x != s) {
                cout << x << " <- ";
                x = truoc[x];
            }
            cout << s;
        }
        cout << endl;
    }
}

int main() {
    cin >> n >> s;
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j) {
            cin >> a[i][j];
            if (a[i][j] == 0) {
                a[i][j] = INF;
            }
        }
    }
    BellmanFord(s);
    return 0;
}