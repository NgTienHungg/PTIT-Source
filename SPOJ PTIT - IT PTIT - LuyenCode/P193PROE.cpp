// https://www.spoj.com/PTIT/problems/P193PROE/
// P193PROE - Problem E - Xin kẹo

#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;
const int mod = 1e9 + 7;

int main()
{
    int n, m;
    cin >> n >> m;
    int a[N], b[N];
    for (int i = 1; i <= n; ++i)
        cin >> a[i] >> b[i];

    long long res = 1;
    while (m-- >= 0)
    {
        for (int i = 1; i <= n; ++i)
        {
            if (a[i] == 1)
                res = (res + b[i]) % mod;
            else
                res = (res * b[i]) % mod;
        }
    }
    cout << res;
    return 0;
}