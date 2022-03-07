// https://code.itptit.com/problems/100024
// Build case

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[4][4];
    for (int i = 0; i < 4; ++i)
        cin >> a[i][0];
    long long sum = 0;
    for (int i = 0; i < 4; ++i)
    {
        cin >> a[i][1];
        sum += a[i][0] * a[i][1];
    }
    cout << sum;
    return 0;
}