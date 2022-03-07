// https://luyencode.net/problem/VL07
// VL07 - Tính tổ hợp

#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int ToHop(int k, int n)
{
    if (k == 0 || k == n)
        return 1;
    if (k == 1)
        return n;
    int res = ToHop(k, n - 1) + ToHop(k - 1, n - 1);
    return res;
}

int main()
{
    int n, k;
    cin >> n >> k;
    cout << ToHop(k, n);
    return 0;
}