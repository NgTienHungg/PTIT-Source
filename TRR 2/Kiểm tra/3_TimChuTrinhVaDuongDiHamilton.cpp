#include <bits/stdc++.h>
using namespace std;

int n, a[1005][1005], f[1005], s, b[1005], check;

void ham(int k) {
    for (int i = 1; i <= n; i++) {
        if (a[b[k - 1]][i]) {
            if (k == n + 1) {
                check = 1;
                for (int j = 1; j <= n; j++)
                    cout << b[j] << ' ';
                if (i == b[1])
                    cout << s;
                cout << endl;
                return;
            }
            else if (!f[i]) {
                b[k] = i;
                f[i] = 1;
                ham(k + 1);
                f[i] = 0;
            }
        }
    }
}

void xuly() {
    cin >> n >> s;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            cin >> a[i][j];
    b[1] = s;
    f[s] = 1;
    ham(2);
}

int main() {
    int t = 1;
    while (t--) xuly();
    if (!check) cout << "No Hamiltonian path";
    return 0;
}