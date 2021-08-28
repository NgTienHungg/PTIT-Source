// https://www.spoj.com/PTIT/problems/P161PROG/
// P161PROG - ROUND 1G - Số đặc biệt

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

bool ktcp(ll n)
{
    int z = sqrt(n);
    return z * z == n;
}

bool check(ll n)
{
    for (int i = 1; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            if (i > 1 && ktcp(i))
                return 0;
            if ((n / i) > 1 && ktcp(n / i))
                return 0;
        }
    }
    return 1;
}

int main()
{
    ll n;
    cin >> n;
    ll ans;
    for (int i = 1; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            ll x = n / i;
            if (check(x))
            {
                ans = x;
                break;
            }
            if (check(i))
                ans = i;
        }
    }
    cout << ans;
    return 0;
}

// Ước của n là số không có bất kì ước nào là số chính phương