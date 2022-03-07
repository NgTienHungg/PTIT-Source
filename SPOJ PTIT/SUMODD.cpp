// https://luyencode.net/problem/SUMODD
// SUMODD - Tính tổng các số lẻ

#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long l, r;
    cin >> l >> r;
    if (l % 2 == 0)
        l++;
    if (r % 2 == 0)
        r--;
    cout << (l + r) * ((r - l) / 2 + 1) / 2;
    return 0;
}