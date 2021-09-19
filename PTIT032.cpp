// https://luyencode.net/problem/PTIT032
// PTIT032 - Độ dốc của mảng

#include <bits/stdc++.h>
using namespace std;

const int maxSize = 2 * 1e5;

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; ++i)
        cin >> a[i];

    int b[maxSize] = {0}, c[maxSize] = {0};
    for (int i = 0; i < n; ++i)
    {
        if (i == 0)
        {
            b[i] = 1;
            continue;
        }
        if (a[i] > a[i - 1])
            b[i] = b[i - 1] + 1;
        else
            b[i] = 1;
    }

    for (int i = n - 1; i >= 0; --i)
    {
        if (i == n - 1)
        {
            c[i] = 1;
            continue;
        }
        if (a[i] > a[i + 1])
            c[i] = c[i + 1] + 1;
        else
            c[i] = 1;
    }

    for (int i = 0; i < n; ++i)
        cout << b[i] + c[i] - 1 << " ";
    return 0;
}