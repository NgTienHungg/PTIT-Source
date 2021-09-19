// https://www.spoj.com/PTIT/problems/P154SUMI/
// P154SUMI - ROUND 4I - Bộ 3 số Pytago

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int n;
    cin >> n;
    int d = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j <= n; j++)
        {
            ll x = i * i + j * j;
            ll z = sqrt(x);
            if (z <= n && z * z == x)
                d++;
        }
    }
    cout << d;
    return 0;
}