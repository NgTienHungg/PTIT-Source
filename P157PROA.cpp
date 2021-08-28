// https://www.spoj.com/PTIT/problems/P157PROA/
// P157PROA - ROUND 7A - Số may mắn

#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    int a[n], b[1001] = {0};
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        b[a[i]]++;
    }
    int Max = 0, pos = 0;
    for (int i = 1; i <= 1000; i++)
    {
        if (b[i] > Max)
        {
            Max = b[i];
            pos = i;
        }
    }
    cout << pos << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}