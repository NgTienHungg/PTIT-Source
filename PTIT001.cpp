// https://luyencode.net/problem/PTIT001
// PTIT001 - Vẽ hình chữ nhật đặc

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
            cout << "*";
        cout << endl;
    }
    return 0;
}