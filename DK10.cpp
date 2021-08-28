// https://luyencode.net/problem/DK10
// DK10 - Tìm số ngày của tháng

#include <bits/stdc++.h>
using namespace std;

bool isNamNhuan(int y)
{
    if ((y % 4 == 0 && y % 100 != 0) || y % 400 == 0)
        return 1;
    return 0;
}

int thang(int m)
{
    if (m == 2)
        return 28;
    if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12)
        return 31;
    return 30;
}

int main()
{
    int m, y;
    cin >> m >> y;
    if (m < 0 || m > 12 || y <= 0 || y >= 1e5)
        cout << "INVALID";
    else
    {
        if (isNamNhuan(y) && m == 2)
            cout << 29;
        else
            cout << thang(m);
    }
    return 0;
}