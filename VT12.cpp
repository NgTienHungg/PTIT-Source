// https://luyencode.net/problem/VT12
// VT12 - Tìm chênh lệch lớn nhất trong mảng

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; ++i)
        cin >> a[i];
    sort(a, a + n);
    cout << a[n - 1] - a[0];
    return 0;
}