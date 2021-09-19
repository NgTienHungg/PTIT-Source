// https://www.spoj.com/PTIT/problems/P187PROB/
// P187PROB - ROUND 7B - TỔNG ƯỚC SỐ NGUYÊN TỐ

#include <bits/stdc++.h>
#define limit 2000000
using namespace std;
typedef long long ll;

vector<bool> e(limit + 1, 1); // e = eratosthenes
void eratosthenes()
{
    e[0] = e[1] = 0;
    for (int i = 2; i * i <= limit; i++)
        if (e[i])
            for (int j = i * i; j <= limit; j += i)
                e[j] = 0;
}

vector<int> p(limit + 1, 0); // p = prime
void PhanTichSo()
{
    for (int i = 2; i * i <= limit; i++)
    {
        if (p[i] == 0)
        {
            for (int j = i; j <= limit; j += i)
            {
                if (p[j] == 0)
                    p[j] = i;
            }
        }
    }
    for (int i = 2; i <= limit; i++)
    {
        if (p[i] == 0)
            p[i] = i;
    }
}

int SUM(int a)
{
    int sum = 0;
    while (a != 1)
    {
        sum += p[a];
        a /= p[a];
    }
    return sum;
}

int main()
{
    eratosthenes();
    PhanTichSo();
    int T;
    cin >> T;
    ll sum = 0;
    for (int t = 1; t <= T; t++)
    {
        int a;
        cin >> a;
        if (p[a] != 0)
            sum += SUM(a);
        else
            sum += a;
    }
    cout << sum;
    return 0;
}