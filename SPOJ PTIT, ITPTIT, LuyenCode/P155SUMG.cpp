// https://www.spoj.com/PTIT/problems/P155SUMG/
// P155SUMG - ROUND 5G - Trò chơi với que tính

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int d = 1;
    while (1)
    {
        if (n == 0 || m == 0)
            break;
        n--;
        m--;
        if (d == 1)
            d = 2;
        else
            d = 1;
    }
    if (d == 1)
        cout << "Wilshere";
    else
        cout << "Xavi";
    return 0;
}