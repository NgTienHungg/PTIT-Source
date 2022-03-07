// https://www.spoj.com/PTIT/problems/P161SUMG/
// P161SUMG - ROUND 1G - Năm người yêu nhau

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c, d, e;
    cin >> a >> b >> c >> d >> e;
    int sum = a + b + c + d + e;
    if (sum % 5 == 0 && sum != 0)
        cout << sum / 5;
    else
        cout << -1;
    return 0;
}