// https://www.spoj.com/PTIT/problems/CPPPRI07/
// CPPPRI07 - PRIME 7

#include <bits/stdc++.h>
using namespace std;

vector<bool> v(1e4 + 1, 1);
vector<int> p; // p: prime
void eratosthenes()
{
    v[0] = v[1] = 0;
    for (int i = 2; i * i <= 1e4; i++)
        if (v[i])
            for (int j = i * i; j <= 1e4; j += i)
                v[j] = 0;
    for (int i = 2; i <= 1e4; i++)
        if (v[i])
            p.push_back(i);
}

void solve()
{
    int n;
    cin >> n;
    int count = 0, dem = 0;
    for (int i = 0; i < p.size(); i++)
    {
        if (n % p[i] == 0)
        {
            count++;
            while (n % p[i] == 0)
            {
                n /= p[i];
                dem++;
            }
        }
        if (n == 1)
            break;
    }
    if (count == 3 && dem == 3)
        cout << "1\n";
    else
        cout << "0\n";
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