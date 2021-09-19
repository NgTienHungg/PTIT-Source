// https://luyencode.net/problem/SUMDIG
// SUMDIG - Tổng các chữ số

#include <bits/stdc++.h>
using namespace std;

void testCase()
{
    int n;
    cin >> n;
    int s = 0;
    for (int i = 1; i <= sqrt(n); ++i)
    {
        if (n % i == 0)
        {
            s += i + n / i;
            if (i * i == n)
                s -= i;
        }
    }
    cout << s << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        testCase();
    return 0;
}