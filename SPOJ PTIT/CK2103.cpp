// https://code.itptit.com/problems/100034
// "Tôi là bánh khúc đây!"

#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

void TestCase()
{
    long long a, b, x, y;
    cin >> x >> y;
    cin >> a >> b;
    long long res1 = a * (x + y);
    long long res2 = b * min(x, y) + a * (max(x, y) - min(x, y));
    cout << min(res1, res2) << endl;
}

int main()
{
    int T;
    cin >> T;
    while (T--)
        TestCase();
    return 0;
}