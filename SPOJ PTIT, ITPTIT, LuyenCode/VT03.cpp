// https://luyencode.net/problem/VT03
// VT03 - Chỉ số mảng có giá trị lớn nhất

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n], maxx = -1e9, pos;
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
        if (a[i] >= maxx)
        {
            maxx = a[i];
            pos = i;
        }
    }
    cout << pos;
    return 0;
}