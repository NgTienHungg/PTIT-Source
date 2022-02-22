// https://www.spoj.com/PTIT/problems/CPPPRI10/
// CPPPRI10 - PRIME 10

#include <bits/stdc++.h>
using namespace std;

vector<bool> v(1e5 + 1, 1);
void eratosthenes()
{
    v[0] = v[1] = 0;
    for (int i = 2; i * i <= 1e5; i++)
        if (v[i])
            for (int j = i * i; j <= 1e5; j += i)
                v[j] = 0;
}

int sumCS(int n)
{
    if (n < 10)
        return n;
    int sum = 0;
    while (n > 0)
    {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int sumNT(int n)
{
    int sum = 0;
    for (int i = 2; i <= sqrt(n); i++)
    {
        while (n % i == 0)
        {
            sum += sumCS(i);
            n /= i;
        }
        if (n == 1)
            return sum;
    }
    return sum + sumCS(n);
}

void solve()
{
    int n;
    cin >> n;
    if (v[n] == 0 && sumCS(n) == sumNT(n))
        cout << "YES";
    else
        cout << "NO";
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