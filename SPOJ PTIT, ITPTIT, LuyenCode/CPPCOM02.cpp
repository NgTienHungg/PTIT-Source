// https://www.spoj.com/PTIT/problems/CPPCOM02/
// CPPCOM02 - COMINATION 2

#include <bits/stdc++.h>
using namespace std;

void init(int a[], int k)
{
    for (int i = 1; i <= k; i++)
        a[i] = i;
}

void print(int a[], int k)
{
    for (int i = 1; i <= k; i++)
        cout << a[i];
    cout << " ";
}

void sinh(int a[], int k, int n, bool &stop)
{
    for (int i = k; i > 0; i--)
        if (a[i] != n - k + i)
        {
            a[i] += 1;
            for (int j = i + 1; j <= k; j++)
                a[j] = a[j - 1] + 1;
            return;
        }
    stop = 1;
}

void solve()
{
    int n, k;
    int a[15];
    bool stop = 0;
    cin >> n >> k;
    init(a, k);
    while (!stop)
    {
        print(a, k);
        sinh(a, k, n, stop);
    }
    cout << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}