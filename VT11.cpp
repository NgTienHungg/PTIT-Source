// https://luyencode.net/problem/VT11
// VT11 - Lại là sắp xếp mảng

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; ++i)
        cin >> a[i];
    sort(a + 1, a + n - 1);
    for (int i = 0; i < n; ++i)
        cout << a[i] << " ";
    return 0;
}