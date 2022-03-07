// https://www.spoj.com/PTIT/problems/CPPPRI09/
// CPPPRI09 - PRIME 9

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
    int n;
    cin >> n;
    for (int i = 2; i <= 1e4; i++)
    {
        if (v[i] && n % i == 0)
        {
            int count = 0;
            while (n % i == 0)
            {
                n /= i;
                count++;
            }
            cout << i << " " << count << " ";
        }
        if (n == 1)
            break;
    }
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