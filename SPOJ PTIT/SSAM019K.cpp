// https://www.spoj.com/PTIT/problems/SSAM019K/
// SSAM019K - SỐ SMITH

#include <bits/stdc++.h>
using namespace std;
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
        if (n == 1)
            return sum;
    }
    return sum + sumCS(n);
}

int main()
{
    ll n;
    cin >> n;
    if (n < 10)
    {
        if (n == 4)
            cout << "YES";
        else
            cout << "NO";
    }
    else if (sumCS(n) == sumNT(n))
        cout << "YES";
    else
        cout << "NO";
    return 0;
}