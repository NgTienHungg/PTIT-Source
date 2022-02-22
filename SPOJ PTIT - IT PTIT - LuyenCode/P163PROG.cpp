// https://www.spoj.com/PTIT/problems/P163PROG/
// P163PROG - ROUND 3G - Bảng nhân

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, x;
    cin >> n >> x;
    int d = 0;
    for (int i = 1; i <= sqrt(x); i++)
    {
        if (x % i == 0)
        {
            if (x / i <= n)
                d += 2;
            if (i * i == x)
                d--;
        }
    }
    cout << d;
    return 0;
}

//* x = i * j nên (i, j) là 1 cặp ước của x
//* Tìm các ước của x, t/m <= n