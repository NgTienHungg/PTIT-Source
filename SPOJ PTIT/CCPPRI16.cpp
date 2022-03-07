// https://www.spoj.com/PTIT/problems/CCPPRI16/
// CCPPRI16 - PRIME 16

#include <bits/stdc++.h>
using namespace std;

vector<bool> v(1e7 + 1, 1);
void eratosthenes()
{
    v[0] = v[1] = 0;
    for (int i = 2; i * i <= 1e7; i++)
        if (v[i])
            for (int j = i * i; j <= 1e7; j += i)
                v[j] = 0;
}

void solve()
{
    long long n;
    cin >> n;
    int count = 0;
    for (int i = 2; i <= sqrt(n); i++)
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