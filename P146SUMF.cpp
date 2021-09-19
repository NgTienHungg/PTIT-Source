// https://www.spoj.com/PTIT/problems/P146SUMF/
// P146SUMF - ROUND 6F - Dãy số kì diệu

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

bool check(int kt[], ll n, int i)
{
    ll x = n * i;
    while (x > 0)
    {
        kt[x % 10] = 1;
        x /= 10;
    }

    for (int i = 0; i <= 9; i++)
    {
        if (kt[i] == 0)
        {
            return 0;
        }
    }
    return 1;
}

void solve(int n)
{
    int kt[10] = {0}; // 0 -> 9
    for (int i = 1;; i++)
    {
        if (check(kt, n, i) == 1)
        {
            cout << i << endl;
            return;
        }
    }
}

int main()
{
    ll n;
    while (cin >> n)
    {
        solve(n);
    }
    return 0;
}