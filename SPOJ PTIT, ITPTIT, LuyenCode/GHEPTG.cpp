// https://luyencode.net/problem/GHEPTG
// GHEPTG - Ghép tam giác

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[3];
    cin >> a[0] >> a[1] >> a[2];
    sort(a, a + 3);
    int r = 0;
    if (a[0] + a[1] <= a[2])
        r = (a[2] - a[0] - a[1]) + 1;
    cout << r;
    return 0;
}