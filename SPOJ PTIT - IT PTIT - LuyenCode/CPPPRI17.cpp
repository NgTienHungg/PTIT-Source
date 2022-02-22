// https://www.spoj.com/PTIT/problems/CPPPRI17/
// CPPPRI17 - PRIME 17

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

vector<bool> v(1e6 + 1, 1);
void eratosthenes()
{
    v[0] = v[1] = 0;
    for (int i = 2; i * i <= 1e6; i++)
        if (v[i])
            for (int j = i * i; j <= 1e6; j += i)
                v[j] = 0;
}

void solve()
{
    ll l, r;
    cin >> l >> r;
    int x = ceil(sqrt(l));
    int y = floor(sqrt(r));
    int count = 0;
    for (int i = x; i <= y; i++)
        if (v[i])
            count++;
    cout << count << endl;
}

int main()
{
    eratosthenes();
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}