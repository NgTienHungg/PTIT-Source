// https://www.spoj.com/PTIT/problems/P184PROA/
// P184PROA - ROUND 4A - Xếp hàng mua vé

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, a, b;
    cin >> n >> a >> b;
    cout << n + 1 - max(a + 1, n - b);
    return 0;
}

/*
x là vị trí đứng
Số người đứng trước là x - 1 => x >= a + 1
Số người đứng sau là n - x => x >= n - b
max(a+1, n-b) <= x <= n
*/