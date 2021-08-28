// https://luyencode.net/problem/VT06
// VT06 - Tính trung bình cộng của mảng

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n], cou = 0, sum = 0;
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
        if (abs(a[i]) % 2 == 1)
        {
            cou++;
            sum += a[i];
        }
    }
    if (cou == 0)
        cout << "0.0000";
    else
        cout << setprecision(4) << fixed << (double)sum / cou;
    return 0;
}

//! Số lẻ âm