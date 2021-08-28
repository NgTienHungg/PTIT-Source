// https://luyencode.net/problem/GACHO
// GACHO - Gà và Chó

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int m, n;
    cin >> m >> n;
    if (n < 2 * m || (n - 2 * m) % 2 == 1)
        cout << -1;
    else {
        int c = (n - 2 * m) / 2;
        int g = m - c;
        if (g < 0)
            cout << -1;
        else
            cout << g << " " << c;
    }
    return 0;
}