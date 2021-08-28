// https://luyencode.net/problem/HCNV1
// HCNV1 - Bài toán hình chữ nhật 1

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c, d, x, y;
    cin >> a >> b >> c >> d >> x >> y;
    if (x > min(a, c) && x < max(a, c) && y > min(b, d) && y < max(b, d))
        cout << "YES";
    else
        cout << "NO";
    return 0;
}