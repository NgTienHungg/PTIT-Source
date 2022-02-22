// https://www.spoj.com/PTIT/problems/P197PROC/
// P197PROC - Problem C - Vẻ đẹp của mảng

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n], Max = INT_MIN;
    bool isPositive = false;
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
        Max = max(Max, a[i]);
        if (a[i] > 0)
            isPositive = true;
    }

    if (!isPositive)
        cout << Max;
    else
    {
        long long sum = 0, Max = a[0];
        for (int i = 0; i < n; ++i)
        {
            if (sum + a[i] < 0)
            {
                sum = 0;
                continue;
            }
            sum += a[i];
            Max = max(Max, sum);
        }
        cout << Max;
    }
    return 0;
}