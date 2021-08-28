// https://www.spoj.com/PTIT/problems/P141SUMB/
// P141SUMB - ROUND 1B - Hoán vị

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<bool> v(n + 1, 0);
    for (int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;
        if (x >= 1 && x <= n)
            v[x] = 1;
    }

    int d = 0;
    for (int i = 1; i <= n; i++)
    {
        if (v[i] == 0)
            d++;
    }
    cout << d;
    return 0;
}