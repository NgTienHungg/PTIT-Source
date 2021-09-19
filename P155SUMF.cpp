// https://www.spoj.com/PTIT/problems/P155SUMF/
// P155SUMF - ROUND 5F - Tìm lại dãy số

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll n;
    cin >> n;
    ll a[n + 1];
    ll b[n + 1];
    a[0] = b[0] = 0;
    for (int i = 1; i <= n; i++)
        cin >> a[i];

    for (int i = 1; i <= n; i++)
    {
        b[i] = a[i] * i - a[i - 1] * (i - 1);
        cout << b[i] << " ";
    }
    return 0;
}