// https://www.spoj.com/PTIT/problems/BCGCD/
// BCGCD - Ước chung lớn nhất, bội chung nhỏ nhất (Cơ bản)

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll ucln(ll a, ll b)
{
    while (b > 0)
    {
        ll x = a % b;
        a = b;
        b = x;
    }
    return a;
}

int main()
{
    ll a, b;
    while (1)
    {
        cin >> a >> b;
        if (a == 0 && b == 0)
            return 0;
        ll c = ucln(a, b);
        cout << c << " " << a * b / c << endl;
    }
    return 0;
}