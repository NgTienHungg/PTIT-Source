// https://www.spoj.com/PTIT/problems/CPPMOD01/
// CPPMOD01 - MODULO 1

#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int x, y;
    long long p;
    cin >> x >> y >> p;
    int z = x % p;
    long long res = 1;
    for (int i = 1; i <= y; i++)
        res = (res * z) % p;
    cout << res << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}