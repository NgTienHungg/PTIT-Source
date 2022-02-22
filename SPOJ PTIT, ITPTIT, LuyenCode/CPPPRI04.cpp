// https://www.spoj.com/PTIT/problems/CPPPRI04/
// CPPPRI04 - PRIME 4

#include <bits/stdc++.h>
using namespace std;

vector<int> v(10005, 1);
void eratosthenes()
{
    for (int i = 2; i * i <= 10000; i++)
        if (v[i] == 1)
            for (int j = i; j <= 10000; j += i)
                if (v[j] == 1)
                    v[j] = i;
    for (int i = 2; i <= 10000; i++)
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