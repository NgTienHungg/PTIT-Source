// https://code.itptit.com/problems/100028
// Giao điểm

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a1, b1, c1, a2, b2, c2;
    cin >> a1 >> b1 >> c1 >> a2 >> b2 >> c2;
    if (a1 * b2 == a2 * b1 && a1 * c2 == a2 * c1)
        cout << -1;
    else
        cout << 1;
    return 0;
}