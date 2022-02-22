// https://www.spoj.com/PTIT/problems/P166PROC/
// P166PROC - ROUND 6C - Bánh sinh nhật

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    char a[100][100];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> a[i][j];
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        int dem = 0;
        for (int j = 0; j < n; j++)
            if (a[i][j] == 'C')
                dem++;
        count += (dem * (dem - 1)) / 2;
    }
    for (int i = 0; i < n; i++)
    {
        int dem = 0;
        for (int j = 0; j < n; j++)
            if (a[j][i] == 'C')
                dem++;
        count += (dem * (dem - 1)) / 2;
    }
    cout << count;
    return 0;
}