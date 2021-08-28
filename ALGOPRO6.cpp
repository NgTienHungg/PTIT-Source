// https://www.spoj.com/PTIT/problems/ALGOPRO6/
// ALGOPRO6 - Giá trị của năm

#include <bits/stdc++.h>
using namespace std;

bool ktNamNhuan(int n)
{
    if (n % 400 == 0)
        return 1;
    if (n % 4 == 0 && n % 100 != 0)
        return 1;
    return 0;
}

int sumCS(int n)
{
    int sum = 0;
    while (n > 0)
    {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main()
{
    int n;
    cin >> n;
    int sum = 0, day = 0, month = 0, year = 0;
    for (int i = 1; i <= 30; i++)
    {
        day += sumCS(i); // Tổng 30 ngày
    }
    year = sumCS(n); // 1 năm
    if (ktNamNhuan(n))
    {
        sum += 366 * year; // 366 ngày
        sum += 4 * day + 30 * (sumCS(4) + sumCS(6) + sumCS(9) + sumCS(11));
        sum += 7 * (day + (3 + 1)) + 31 * (sumCS(1) + sumCS(3) + sumCS(5) + sumCS(7) + sumCS(8) + sumCS(10) + sumCS(12));
        sum += (day - (3 + 0)) + 29 * sumCS(2); // Tháng 2 có 29 ngày
        cout << sum;
    }
    else
    {
        sum += 365 * year; // 365 ngày
        sum += 4 * day + 30 * (sumCS(4) + sumCS(6) + sumCS(9) + sumCS(11));
        sum += 7 * (day + (3 + 1)) + 31 * (sumCS(1) + sumCS(3) + sumCS(5) + sumCS(7) + sumCS(8) + sumCS(10) + sumCS(12));
        sum += (day - (3 + 0) - (2 + 9)) + 28 * sumCS(2); // Tháng 2 có 29 ngày
        cout << sum;
    }
    return 0;
}

// Năm nhuận là năm chia hết cho 400 hoặc chia hết cho 4 nhưng không chia hết cho 100