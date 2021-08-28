// https://www.spoj.com/PTIT/problems/P174SUMJ/
// P174SUMJ - ROUND 4J - Sắp xếp đơn giản

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    int dd[1001] = {0}; // Đếm
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        dd[a[i]]++;
    }
    int as = 0;
    bool kt = 0;
    while (kt == 0)
    {
        kt = 1;
        int dem = 0;
        for (int i = 1; i <= 1000; i++)
        {
            if (dd[i] > 0)
            {
                dem++;
                dd[i]--;
                kt = 0;
            }
        }
        if (kt == 1 || dem == 1)
            break;
        as += (dem - 1);
    }
    cout << as;
    return 0;
}

// Không hề đơn giản