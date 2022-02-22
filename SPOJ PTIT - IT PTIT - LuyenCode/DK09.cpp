// https://luyencode.net/problem/DK09
// DK09 - Kiểm tra năm nhuận

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    if (n <= 0 || n >= 1e5)
        cout << "INVALID";
    else
    {
        if ((n % 4 == 0 && n % 100 != 0) || n % 400 == 0)
            cout << "YES";
        else
            cout << "NO";
    }
}