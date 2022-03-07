// https://code.itptit.com/problems/100041
// Năm người yêu nhau

#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    int a, b, c, d, e;
    cin >> a >> b >> c >> d >> e;
    int sum = a + b + c + d + e;
    if (sum % 5 != 0 || sum == 0)
        cout << -1;
    else
        cout << sum / 5;
    return 0;
}