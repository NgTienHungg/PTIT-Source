// https://luyencode.net/problem/VL03
// VL03 - Tính tổng S = (2 + 3 + 4... + n) + 2n

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    long long s = (n + 2) * (n - 1) / 2 + 2 * n;
    cout << s;
    return 0;
}