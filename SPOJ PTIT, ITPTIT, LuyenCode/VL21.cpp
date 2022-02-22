// https://luyencode.net/problem/VL21
// VL21 - Đi tìm ẩn số

#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;
    int s = 0;
    for (int i = 1;; ++i)
    {
        s += i;
        if (s > n)
        {
            cout << i - 1;
            return 0;
        }
    }
    return 0;
}