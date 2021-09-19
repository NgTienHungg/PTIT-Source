// https://www.spoj.com/PTIT/problems/P153SUMI/
// P153SUMI - ROUND 3I - Sắp xếp

#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;
    int a[n + 1];
    int dem = 0, vt = -1;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        if (i > 1 && a[i] < a[i - 1])
        {
            dem++;
            vt = i;
        }
    }
    if (dem > 1)
        cout << -1;
    else if (dem == 0)
        cout << 0;
    else if (dem == 1)
    {
        if (a[1] >= a[n])
            cout << n - vt + 1;
        else
            cout << -1;
    }
    return 0;
}