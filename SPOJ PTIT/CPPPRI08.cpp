// https://www.spoj.com/PTIT/problems/CPPPRI08/
// CPPPRI08 - PRIME 8

#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, p;
    cin >> n >> p;
    int x = 0;
    for (int i = 1; i <= n; i++)
        if (i % p == 0)
        {
            int num = i;
            while (num % p == 0)
            {
                x++;
                num /= p;
            }
        }
    cout << x << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}