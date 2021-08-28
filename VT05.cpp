// https://luyencode.net/problem/VT05
// VT05 - Học đếm trong mảng

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, x;
    cin >> n >> x;
    int a[n], cou = 0;
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
        if (a[i] == x)
            cou++;
    }
    cout << cou;
    return 0;
}