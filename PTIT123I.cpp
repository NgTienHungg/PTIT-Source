// https://www.spoj.com/PTIT/problems/PTIT123I/
// PTIT123I - Định lý Chebyshev

#include <bits/stdc++.h>
using namespace std;
const int MAX = 2 * 123456;

vector<bool> v(MAX + 1, 1);
void eratosthenes()
{
    v[0] = v[1] = 0;
    for (int i = 2; i * i <= MAX; i++)
        if (v[i])
            for (int j = i * i; j <= MAX; j += i)
                v[j] = 0;
}

void solve(int n)
{
    int count = 0;
    for (int i = n + 1; i <= 2 * n; i++)
        if (v[i])
            count++;
    cout << count << endl;
}

int main()
{
    eratosthenes();
    int n;
    while (cin >> n)
    {
        if (n == 0)
            break;
        solve(n);
    }
    return 0;
}