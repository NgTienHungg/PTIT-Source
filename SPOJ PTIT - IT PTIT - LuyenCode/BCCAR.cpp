// https://www.spoj.com/PTIT/problems/BCCAR/
// BCCAR - Đỗ xe tối ưu

#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    int a[20];
    int max = 0, min = 99;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] > max)
            max = a[i];
        if (a[i] < min)
            min = a[i];
    }
    cout << 2 * (max - min) << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}