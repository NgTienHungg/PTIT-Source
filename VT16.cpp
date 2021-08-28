// https://luyencode.net/problem/VT16
// VT16 - Liệt kê các số âm

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x;
    bool ok = 0;
    while (cin >> x)
    {
        if (x == 0)
            break;
        if (x < 0)
        {
            ok = 1;
            cout << x << " ";
        }
    }
    if (!ok)
        cout << "NOT FOUND";
    return 0;
}