// https://www.spoj.com/PTIT/problems/CPPPRI05/
// CPPPRI05 - PRIME 5

#include <bits/stdc++.h>
using namespace std;

vector<bool> v(1e4 + 1, 1);
void eratosthenes()
{
    v[0] = v[1] = 0;
    for (int i = 2; i * i <= 1e4; i++)
        if (v[i])
            for (int j = i * i; j <= 1e4; j += i)
                v[j] = 0;
}

void solve()
{
    eratosthenes();
    int m, n;
    cin >> m >> n;
    for (int i = m; i <= n; i++)
        if (v[i])
            cout << i << " ";
    cout << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}