// https://www.spoj.com/PTIT/problems/CPPCOM03/
// CPPCOM03 - COMINATION 3

#include <bits/stdc++.h>
using namespace std;

int n, a[10];

void init()
{
    for (int i = 1; i <= n; i++)
        a[i] = i;
}

void print()
{
    for (int i = 1; i <= n; i++)
        cout << a[i];
    cout << " ";
}

void sort(int vt)
{
    for (int i = vt + 1; i < n; i++)
        for (int j = i + 1; j <= n; j++)
            if (a[j] < a[i])
                swap(a[i], a[j]);
}

void solve()
{
    cin >> n;
    init();
    print();
    while (1)
    {
        int vt = -1;
        for (int i = n - 1; i >= 1; i--)
            if (a[i] < a[i + 1])
            {
                vt = i;
                break;
            }
        if (vt == -1)
            break;
        for (int i = n; i > vt; i--)
            if (a[i] > a[vt])
            {
                swap(a[i], a[vt]);
                break;
            }

        sort(vt);
        print();
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