#include <bits/stdc++.h>
using namespace std;

int n, u, a[1005][1005], b[1005], f[1005];
vector<pair<int, int>> v;

int main() {
    cin >> n >> u;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++)
            cin >> a[i][j];
    }
    int s = 0, m = 0, dem = 0;
    b[++m] = u;
    f[u] = 1;
    while (dem < n - 1) {
        int mi = 1e9, l, r;
        for (int i = 1; i <= m; i++) {
            int t = b[i];
            for (int j = 1; j <= n; j++) {
                if (!f[j] && a[t][j] < mi && a[t][j] > 0) {
                    mi = a[t][j];
                    l = t;
                    r = j;
                }
            }
        }
        dem++;
        if (mi != 1e9) {
            s += mi;
            v.push_back({min(l, r), max(l, r)});
            f[r] = 1;
            b[++m] = r;
            sort(b + 1, b + m + 1);
        }
    }
    if (v.size() < n - 1)
        return cout << "No spanning tree", 0;
    cout << "dH = " << s << endl;
    for (int i = 0; i < v.size(); ++i)
        cout << v[i].first << ' ' << v[i].second << '\n';
}