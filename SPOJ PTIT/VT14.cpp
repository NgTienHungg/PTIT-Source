// https://luyencode.net/problem/VT14
// VT14 - Lại là đi tìm cặp đôi

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> a, b;
    for (int i = 0; i < n; ++i)
    {
        int x;
        cin >> x;
        if (x > 0)
            a.push_back(x);
        else
            b.push_back(x);
    }
    sort(a.begin(), a.end(), greater<int>());
    sort(b.begin(), b.end());
    if (a.size() == 1 && b.size() == 1)
        cout << a[0] * b[0];
    else
    {
        int x = 0, y = 0;
        if (a.size() >= 2)
            x = a[0] * a[1];
        if (b.size() >= 2)
            y = b[0] * b[1];
        cout << max(x, y);
    }
    return 0;
}