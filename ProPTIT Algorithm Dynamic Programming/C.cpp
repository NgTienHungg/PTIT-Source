// https://codeforces.com/group/eFlt2UuXYv/contest/345055/problem/C
// C. Dãy con chung dài nhất

#include <bits/stdc++.h>
using namespace std;

int main() {
    string a, b;
    cin >> a >> b;

    int res = 0;
    int n = a.length(), m = b.length();
    vector<vector<int>> f(n + 1, vector<int>(m + 1, 0));

    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= m; ++j) {
            if (a[i - 1] == b[j - 1])
                f[i][j] = f[i - 1][j - 1] + 1;
            else 
                f[i][j] = max(f[i - 1][j], f[i][j - 1]);
            res = max(res, f[i][j]);
        }
    }
    
    cout << res;
    return 0;
}