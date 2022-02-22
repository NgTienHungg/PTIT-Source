#include <stdio.h>
#include <math.h>
#include <stdbool.h>

typedef long long ll;

bool check(ll n)
{
    if (n < 2)
        return 0;
    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0)
            return 0;
    return 1;
}

void solve()
{
    ll n;
    scanf("%lld", &n);
    ll res;
    for (ll i = 1; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            if (check(n / i))
            {
                printf("%lld\n", n / i);
                return;
            }
            if (check(i))
                res = i;
        }
    }
    printf("%lld\n", res);
}

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
        solve();
    return 0;
}