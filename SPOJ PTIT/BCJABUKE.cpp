// https://www.spoj.com/PTIT/problems/BCJABUKE/
// BCJABUKE - Nhặt táo

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, j;
    cin >> n >> m >> j;
    vector<int> v(j);
    for (int i = 0; i < j; i++)
    {
        cin >> v[i];
    }
    int x = 0, y = m;
    int count = 0;
    for (int i = 0; i < j; i++)
    {
        if (v[i] > x && v[i] <= y)
            continue;
        if (v[i] <= x)
        {
            count += x - (v[i] - 1);
            x = v[i] - 1;
            y = x + m;
        }
        else if (v[i] > y)
        {
            count += v[i] - y;
            y = v[i];
            x = y - m;
        }
    }
    cout << count;
    return 0;
}