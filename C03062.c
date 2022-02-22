#include <stdio.h>

typedef long long ll;

ll GCD(ll a, ll b)
{
    while (b != 0)
    {
        ll x = a % b;
        a = b;
        b = x;
    }
    return a;
}

void solve()
{
    int n, m;
    scanf("%d %d", &n, &m);
    ll res = 1;
    for (int i = n; i <= m; i++)
    {
        ll uoc = GCD(res, i);
        res = res * i / uoc;
    }
    printf("%lld\n", res);
}

int main()
{
    int T;
    scanf("%d", &T);
    while (T--)
        solve();
    return 0;
}