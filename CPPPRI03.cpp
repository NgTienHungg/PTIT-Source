// https://www.spoj.com/PTIT/problems/CPPPRI03/
// CPPPRI03 - PRIME 3

#include <bits/stdc++.h>
using namespace std;

vector<bool> v(1e4 + 1, 1);
void eratothenes()
{
    v[0] = v[1] = 0;
    for (int i = 2; i <= sqrt(1e4); i++)
    {
        if (v[i])
        {
            for (int j = i * i; j <= 1e4; j += i)
            {
                v[j] = 0;
            }
        }
    }
}

void solve()
{
    int n;
    cin >> n;
    for (int i = 2; i <= n; i++)
        if (v[i])
            cout << i << " ";
    cout << endl;
}

int main()
{
    eratothenes();
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}