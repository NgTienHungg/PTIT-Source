// https://luyencode.net/problem/VL16
// VL16 - Tìm bội chung nhỏ nhất của 2 số

#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
    while (b > 0)
    {
        int x = a % b;
        a = b;
        b = x;
    }
    return a;
}

int lcm(int a, int b)
{
    return a * b / gcd(a, b);
}

int main()
{
    int a, b;
    cin >> a >> b;
    a = abs(a);
    b = abs(b);
    cout << lcm(a, b);
    return 0;
}