// https://www.spoj.com/PTIT/problems/P154SUMF/
// P154SUMF - ROUND 4F - Ký túc xá

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n][2];
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i][0] >> a[i][1];
        if ((a[i][0] + 2) <= a[i][1])
            count++;
    }
    cout << count;
    return 0;
}