// https://luyencode.net/problem/VT01
// VT01 - Tìm số lớn nhất trong mảng

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; ++i)
        cin >> a[i];
    cout << *max_element(a, a + n);
    return 0;
}