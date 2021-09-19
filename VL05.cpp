// https://luyencode.net/problem/VL04
// VL05 - Tính giá trị S = 1 - 2 + 3 - ... + (3n + 1)

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    long long s;
    if (n % 2 == 0)
        s = -3 * n / 2 + 3 * n + 1;
    else
        s = -(3 * n + 1) / 2;
    cout << s;
    return 0;
}