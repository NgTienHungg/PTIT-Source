// https://www.spoj.com/PTIT/problems/P132SUMD/
// P132SUMD - SUM2 D - Thực hiện phép tính

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    // TH1: Số đầu tiên là kết quả
    if (a == (b + c))
    {
        cout << a << "=" << b << "+" << c;
        return 0;
    }
    if (a == (b - c))
    {
        cout << a << "=" << b << "-" << c;
        return 0;
    }
    if (a == (b * c))
    {
        cout << a << "=" << b << "*" << c;
        return 0;
    }
    if (a == (b / c))
    {
        cout << a << "=" << b << "/" << c;
        return 0;
    }
    // TH2: Số cuối cùng là kết quả
    if ((a + b) == c)
    {
        cout << a << "+" << b << "=" << c;
        return 0;
    }
    if ((a - b) == c)
    {
        cout << a << "-" << b << "=" << c;
        return 0;
    }
    if ((a * b) == c)
    {
        cout << a << "*" << b << "=" << c;
        return 0;
    }
    if ((a / b) == c)
    {
        cout << a << "/" << b << "=" << c;
        return 0;
    }
    return 0;
}