// https://luyencode.net/problem/VL17
// VL17 - Đếm số lượng ước số

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a;
    cin >> a;
    a = abs(a);
    int d = 0;
    for (int i = 1; i <= sqrt(a); ++i)
    {
        if (a % i == 0)
        {
            d += 2;
            if (i * i == a)
                d--;
        }
    }
    cout << d;
    return 0;
}