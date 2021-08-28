// https://www.spoj.com/PTIT/problems/P132SUMH/
// P132SUMH - SUM2 H - Kẻ gác cổng

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int t[3];
    for (int i = 0; i < 3; i++)
    {
        cin >> t[i];
    }
    int v[10001] = {0};
    for (int i = 1; i <= 1000; i += b)
    {
        for (int j = i; j < i + a; j++)
        {
            v[j]++;
        }
        i += a;
    }
    for (int i = 1; i <= 1000; i += d)
    {
        for (int j = i; j < i + c; j++)
        {
            v[j]++;
        }
        i += c;
    }
    for (int i = 0; i < 3; i++)
    {
        if (v[t[i]] == 0)
            cout << "none\n";
        else if (v[t[i]] == 1)
            cout << "one\n";
        else
            cout << "both\n";
    }
    return 0;
}