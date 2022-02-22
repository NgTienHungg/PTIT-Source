// https://code.ptit.edu.vn/student/question/CPP0741
// TÍNH LŨY THỪA

#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
typedef long long ll;

ll Mul(ll a, ll b, ll p)
{
    if (b == 1)
        return a;
    ll t = Mul(a, b / 2, p);
    ll r = 2 * t;
    if (b % 2 == 1)
        return (r + a) % p;
    return r % p;
}

ll Pow(ll a, ll b, ll p)
{
    if (b == 1)
        return a % p;
    ll t = Pow(a, b / 2, p);
    ll r = Mul(t, t, p);
    if (b % 2 == 1)
        return r * a % p;
    return r % p;
}

void TestCase()
{
    ll x, y, p;
    cin >> x >> y >> p;
    cout << Pow(x, y, p) << endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int T;
    cin >> T;
    while (T--)
        TestCase();
    return 0;
}