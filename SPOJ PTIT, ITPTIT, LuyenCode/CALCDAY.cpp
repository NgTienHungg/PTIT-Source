// https://code.itptit.com/problems/100057
// Tính số ngày

#include <bits/stdc++.h>
using namespace std;

struct Data
{
    int d;
    int m;
    int y;
    bool NamNhuan;
};

bool isNamNhuan(int y) { return ((y % 4 == 0 && y % 100 != 0) || y % 400 == 0); }

int month_to_day(int m)
{
    int s = 0;
    for (int i = 1; i < m; ++i)
    {
        if (i == 2)
            s += 28;
        else if (i == 4 || i == 6 || i == 9 || i == 11)
            s += 30;
        else if (i == 1 || i == 3 || i == 5 || i == 7 || i == 8 || i == 10)
            s += 31;
    }
    return s;
}

int year_to_day(int y)
{
    int s = (y - 1) * 365;
    s += (y - 1) / 4 - (y - 1) / 100 + (y - 1) / 400; // Năm nhuận
    return s;
}

int main()
{
    Data a, b;
    cin >> a.d >> a.m >> a.y;
    cin >> b.d >> b.m >> b.y;

    a.NamNhuan = isNamNhuan(a.y);
    int x1 = a.d + month_to_day(a.m) + year_to_day(a.y);
    if (a.NamNhuan && (a.m > 2 || (a.d == 29 && a.m == 2)))
        x1 += 1;

    b.NamNhuan = isNamNhuan(b.y);
    int x2 = b.d + month_to_day(b.m) + year_to_day(b.y);
    if (b.NamNhuan && (b.m > 2 || (b.d == 29 && b.m == 2)))
        x2 += 1;

    cout << x2 - x1;
    return 0;
}

// 1 12 2017
// 24 12 2017