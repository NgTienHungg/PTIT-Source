// https://luyencode.net/problem/PTIT005
// PTIT005 - Số đặc biệt

#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    cin >> n;
    long long s = 0, m = n;
    while (m > 0)
    {
        s += m % 10;
        m /= 10;
    }
    if (n % s == 0)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}