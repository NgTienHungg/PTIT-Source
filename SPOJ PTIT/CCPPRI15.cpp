// https://www.spoj.com/PTIT/problems/CCPPRI15/
// CCPPRI15 - PRIME 15

#include <bits/stdc++.h>
using namespace std;

vector<int> v(1e6 + 1, 1);
void eratosthenes()
{
    for (int i = 2; i * i <= 1e6; i++)
        if (v[i] == 1)
            for (int j = i; j <= 1e6; j += i)
                if (v[j] == 1)
                    v[j] = i;
    for (int i = 2; i <= 1e6; i++)
        if (v[i] == 1)
            v[i] = i;
}

void solve()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
        cout << v[i] << " ";
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