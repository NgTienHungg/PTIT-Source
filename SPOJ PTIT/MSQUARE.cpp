// https://luyencode.net/problem/MSQUARE
// MSQUARE - Cắt hình vuông

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    for (int i = 1; i <= a; ++i)
    {
        for (int j = 1; j <= a; ++j)
        {
            if (i > a - b && j > a - b)
                break;
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}