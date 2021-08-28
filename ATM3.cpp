// https://www.spoj.com/PTIT/problems/BCATM3/
// BCATM3 - ATM 3

#include <bits/stdc++.h>
using namespace std;

int a[9] = {500, 200, 100, 50, 20, 10, 5, 2, 1};

void solve()
{
    int x;
    cin >> x;
    int d = 0;
    for (int i = 0; i < 9; i++)
    {
        d += x / a[i];
        x %= a[i];
    }
    cout << d << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}