// https://www.spoj.com/PTIT/problems/BCTSP/
// BCTSP - Travelling Salesman Problem

#include <bits/stdc++.h>
using namespace std;

int n, a[20][20];
int b[20];      // Sinh hoán vị
int aMin = 1e9; // Chi phí nhỏ nhất giữa 2 thành phố
int S = 0;      // Chi phí hiện tại
int res = 1e9;
bool dd[20];

void init()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cin >> a[i][j];
            if (i != j)
                aMin = min(aMin, a[i][j]);
        }
    }
    memset(dd, 1, sizeof(dd)); // Gán tất cả các phần tử mảng dd[] = 1
    b[1] = 1;                  // Luôn xuất phát từ thành phố 1
    dd[1] = 0;
}

void Try(int i)
{
    for (int j = 1; j <= n; j++)
    {
        if (dd[j])
        {
            b[i] = j;
            dd[j] = 0;
            S += a[b[i - 1]][b[i]];
            if (i == n)
            {
                if (S + a[b[n]][b[1]] < res)
                    res = S + a[b[n]][b[1]];
            }
            else if (S + (n - i + 1) * aMin < res) // Nhánh cận
                Try(i + 1);
            S -= a[b[i - 1]][b[i]];
            dd[j] = 1;
        }
    }
}

int main()
{
    init();

    // TH đặc biệt
    if (n == 1)
    {
        cout << 0;
        return 0;
    }

    Try(2);
    cout << res;
    return 0;
}