// https://luyencode.net/problem/SODEPN
// SODEPN - Số đẹp

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int s = 0;
    while (n > 0)
    {
        s += n % 10;
        n /= 10;
    }
    s % 10 == 9 ? cout << "YES" : cout << "NO";
    return 0;
}