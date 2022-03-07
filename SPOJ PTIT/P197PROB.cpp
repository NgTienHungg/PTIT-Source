// https://www.spoj.com/PTIT/problems/P197PROB/
// P197PROB - Problem B - Món quà bất ngờ

#include <bits/stdc++.h>
using namespace std;

void TestCase()
{
    long long m, k;
    cin >> m >> k;
    long long res = 0;
    for (int i = 1;; ++i)
    {
        if (m >= k * i)
        {
            res += k;
            m -= k * i;
        }
        else
        {
            res += m / i;
            break;
        }
    }
    cout << res << endl;
}

int main()
{
    int T;
    cin >> T;
    while (T--)
        TestCase();
    return 0;
}