// https://codeforces.com/group/eFlt2UuXYv/contest/332066/problem/F
// F. Cooking

#include <bits/stdc++.h>
using namespace std;

void TestCase()
{
    long long n, a, b;
    cin >> n >> a >> b;
    long long res = 0;
    if (b < 2 * a) {
        res += b * (n / 2);
        if (n % 2 == 1)
            res += a;
    }
    else
        res = n * a;
    cout << res << endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
        TestCase();
    return 0;
}