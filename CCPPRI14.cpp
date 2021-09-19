// https://www.spoj.com/PTIT/problems/CCPPRI14/
// CCPPRI14 - PRIME 14

#include <bits/stdc++.h>
using namespace std;

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
    int n;
    cin >> n;
    for (int i = 2; i <= sqrt(n); i++)
        if (v[i])
            cout << i * i << " ";
    cout << endl;
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