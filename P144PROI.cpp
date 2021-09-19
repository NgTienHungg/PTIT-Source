// https://www.spoj.com/PTIT/problems/P144PROI/
// P144PROI - ROUND 4I - Đoạn thẳng lớn nhất

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n][2];
    int left, right;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i][0] >> a[i][1];
        
        if (i == 0)
        {
            left = a[i][0];
            right = a[i][1];
        }
        
        left = min(left, a[i][0]);
        right = max(right, a[i][1]);
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i][0] == left && a[i][1] == right)
        {
            cout << i + 1;
            return 0;
        }
    }
    cout << -1;
    return 0;
}