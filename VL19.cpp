// https://luyencode.net/problem/VL19
// VL19 - In ra các số chia hết chia hết cho 3

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    bool ok = 0;
    for (int i = b - 1; i > a; --i)
    {
        if (i % 3 == 0)
        {
            cout << i << " ";
            ok = 1;
        }
    }
    if (!ok)
        cout << "NOT FOUND";
    return 0;
}

//! Khoảng (a,b)