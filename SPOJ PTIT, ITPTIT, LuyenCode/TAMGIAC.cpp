// https://luyencode.net/problem/TAMGIAC
// TAMGIAC - Kiểm tra tam giác hợp lệ

#include <bits/stdc++.h>
using namespace std;

int main()
{
    double a, b, c;
    cin >> a >> b >> c;
    if (a + b <= c || b + c <= a || a + c <= b)
    {
        cout << "NO";
        return 0;
    }

    cout << a + b + c << " ";
    double p = (a + b + c) / 2;
    double s = sqrt(p * (p - a) * (p - b) * (p - c));
    cout << setprecision(2) << fixed << s;
    return 0;
}