#include <bits/stdc++.h>
using namespace std;

int n, s, a[1005][1005], f[1005], g[1005];
vector<int> v;

bool chutrinh() {
    int d = 0;
    for (int i = 1; i <= n; i++) {
        int s = 0;
        for (int j = 1; j <= n; j++)
            s += a[i][j];
        if (s & 1) d++;
    }
    if (d == 2) return 2;
    else if (!d) return 1;
    return 0;
}

void di1() {
    int m = 0;
    f[++m] = s;
    while (m) {
        int i = f[m];
        for (int j = 1; j <= n; j++) {
            if (a[i][j]) {
                f[++m] = j;
                a[i][j] = a[j][i] = 0;
                break;
            }
        }
        if (i == f[m])
            v.push_back(i), m--;
    }
    reverse(v.begin(), v.end());
    for (auto i : v)
        cout << i << ' ';
}

void di2() {
    int m = 0, k = 0;
    f[++m] = s;
    while (m) {
        int i = f[m], j = 1;
        while (j <= n && !a[i][j])
            j++;
        if (j > n) g[++k] = i, m--;
        else f[++m] = j, a[i][j] = a[j][i] = 0;
    }
    for (int i = k; i >= 1; i--)
        cout << g[i] << ' ';
}

void xuly() {
    cin >> n >> s;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++)
            cin >> a[i][j];
    }
    if (chutrinh() == 1) di1();
    else if (chutrinh() == 2) di2();
    else cout << "no Euler cycle";
}

int main() {
    int t = 1;
    while (t--)
        xuly();
    return 0;
}