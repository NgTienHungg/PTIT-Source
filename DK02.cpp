// https://luyencode.net/problem/DK02
// DK02 - Tìm số lớn nhất trong 3 số

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    cout << max(max(a, b), c);
    return 0;
}