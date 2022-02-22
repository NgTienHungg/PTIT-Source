// https://www.spoj.com/PTIT/problems/VLPT12G/
// VLPT12G - XẾP BÓNG BI-A

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

bool ktXepHinhVuong(ll n)
{
    ll x = sqrt(n);
    if (x * x == n)
        return 1;
    return 0;
}

bool ktXepTamGiac(ll n)
{
    ll denta = 1 + 8 * n;
    ll x = sqrt(denta);
    if (x * x == denta && (-1 + x) % 2 == 0)
        return 1;
    return 0;
}

vector<ll> v = {};
void solve()
{
    for (ll i = 2; i <= 1e9 - 1; i++)
    {
        if (ktXepHinhVuong(i) && ktXepTamGiac(i - 1))
            v.push_back(i);
    }
}

int main()
{
    solve();
    ll a, b;
    for (int t = 1;; t++)
    {
        cin >> a >> b;
        if (a == 0 && b == 0)
            break;
        ll d = 0;
        for (int i = 0; i < v.size(); i++)
        {
            if (v[i] > a && v[i] < b)
                d++;
        }
        cout << "Case " << t << ": " << d << endl;
    }
    return 0;
}