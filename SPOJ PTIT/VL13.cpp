// https://luyencode.net/problem/VL13
// VL13 - Kiểm tra số hoàn hảo

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int res = 0;
    for (int i = 1; i <= sqrt(n); ++i)
    {
        if (n % i == 0)
        {
            res = res + i + n / i;
            if (i * i == n)
                res -= i;
        }
    }
    res -= n;
    if (res == n)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}

// ! 1 không là số hoàn hảo