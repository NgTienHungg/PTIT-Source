// https://luyencode.net/problem/VL15
// VL15 - Rút gọn phân số

#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
    a = abs(a);
    b = abs(b);
    while (b > 0)
    {
        int x = a % b;
        a = b;
        b = x;
    }
    return a;
}

int main()
{
    int a, b;
    cin >> a >> b;
    if (b == 0)
    {
        cout << "INVALID";
        return 0;
    }
    int x = gcd(a, b);
    a /= x;
    b /= x;
    if (b < 0)
    {
        a = -a;
        b = -b;
    }
    if (b == 1)
        cout << a;
    else
        cout << a << " " << b;
    return 0;
}