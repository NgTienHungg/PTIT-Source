// https://www.spoj.com/PTIT/problems/P164SUMI/
// P164SUMI - ROUND 4I - Next round

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    int a[n + 1];
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    int d = 0;
    for (int i = 1; i <= n; i++)
    {
        if (a[i] < a[k])
            break;
        if (a[i] > 0 && a[i] >= a[k])
            d++;
    }
    cout << d;
    return 0;
}