// https://luyencode.net/problem/GT1
// GT1 - Tính giai thừa 1

#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n, res = 1;
    cin >> n;
    for (int i = 1; i <= n; ++i)
        res *= i;
    cout << res;
    return 0;
}