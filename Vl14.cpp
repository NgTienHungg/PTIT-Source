// https://luyencode.net/problem/VL14
// VL14 - Tìm ước chung lớn nhất của 2 số

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    if (a < 0)
        a = -a;
    if (b < 0)
        b = -b;
    while (b > 0)
    {
        int x = a % b;
        a = b;
        b = x;
    }
    cout << a;
    return 0;
}