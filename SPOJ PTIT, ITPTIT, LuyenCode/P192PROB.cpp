// https://www.spoj.com/PTIT/problems/P192PROB/
// P192PROB - Problem B - Trang trí cây đào ngày tết

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x, y, z;
    cin >> x >> y >> z;
    while (x + 1 > y || x + 2 > z)
        x--;
    cout << x + x + 1 + x + 2;
    return 0;
}