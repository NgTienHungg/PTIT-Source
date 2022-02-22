#include <stdio.h>
#include <math.h>
#include <stdbool.h>

typedef long long ll;

ll sumCS(ll n)
{
    ll sum = 0;
    while (n > 0)
    {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

ll sumNT(ll n)
{
    ll sum = 0;
    for (ll i = 2; i <= sqrt(n); i++)
    {
        while (n % i == 0)
        {
            sum += sumCS(i);
            n /= i;
        }
    }
    if (n == 1)
        return sum;
    return sum + sumCS(n);
}

int main()
{
    ll n;
    scanf("%lld", &n);
    if (sumCS(n) == sumNT(n))
        printf("YES");
    else
        printf("NO");
    return 0;
}