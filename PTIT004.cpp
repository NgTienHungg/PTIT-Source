// https://luyencode.net/problem/PTIT004
// PTIT004 - Số đơn giản

#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int sumCS(int n)
{
    int s = 0;
    while (n > 0)
    {
        s += n % 10;
        n /= 10;
    }
    return s;
}

int main()
{
    int n;
    cin >> n;
    while (n >= 10)
        n = sumCS(n);
    cout << n << endl;
    return 0;
}