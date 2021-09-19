// https://www.spoj.com/PTIT/problems/SSAM019G/
// SSAM019G - DÃY XÂU FIBONACI

#include <bits/stdc++.h>
#define endl '\n'

using namespace std;
typedef long long ll;
typedef double db;
const ll mod = 1e9 + 7;

ll l[100];
void initialize()
{
    l[1] = l[2] = 1;
    for (int i = 3; i < 100; i++)
        l[i] = l[i - 1] + l[i - 2];
}

void solve()
{
    ll n, i;
    cin >> n >> i;
    while (n > 2)
    {
        if (i <= l[n - 2])
            n -= 2;
        else
        {
            i -= l[n - 2];
            n -= 1;
        }
    }
    if (n == 1)
        cout << "A\n";
    else
        cout << "B\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    initialize();

    int Test;
    cin >> Test;
    while (Test--)
        solve();
    return 0;
}