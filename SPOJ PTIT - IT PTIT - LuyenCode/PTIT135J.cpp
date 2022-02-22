// https://www.spoj.com/PTIT/problems/PTIT135J/
// PTIT135J - Tính lãi suất

#include <bits/stdc++.h>
using namespace std;

int loG(double x, double y)
{
    int count = 0;
    double res = x;
    while (res < y)
    {
        res *= x;
        count++;
    }
    if (res == y)
        return count;
    return count + 1;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        double n, l, m;
        cin >> n >> l >> m;
        cout << loG((double)1 + l / 100, (double)m / n) << endl;
    }
    return 0;
}