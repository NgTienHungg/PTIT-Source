// https://www.spoj.com/PTIT/problems/P183SUMJ/
// P183SUMJ - ROUND 3J - Dấu vân tay

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    vector<int> b(m);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < m; i++)
        cin >> b[i];
    for (int i = 0; i < n; i++)
    {
        int kt = 0;
        for (int j = 0; j < m; j++)
        {
            if (a[i] == b[j])
            {
                kt = 1;
                break;
            }
        }
        if (kt == 1)
            cout << a[i] << " ";
    }
    return 0;
}