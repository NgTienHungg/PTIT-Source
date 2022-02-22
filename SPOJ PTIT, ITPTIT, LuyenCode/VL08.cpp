// https://luyencode.net/problem/VL08
// VL08 - Tính tổng các số chẵn trong [a, b]

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    int res = 0;
    for (int i = a; i <= b; ++i)
    {
        if (i % 2 == 0)
            res += i;
    }
    cout << res;
    return 0;
}