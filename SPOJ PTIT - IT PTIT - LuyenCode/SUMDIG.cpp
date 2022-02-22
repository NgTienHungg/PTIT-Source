// https://luyencode.net/problem/SUMDIG
// SUMDIG - Tổng các chữ số

#include <bits/stdc++.h>
using namespace std;

void testCase()
{
    long long n;
    cin >> n;
    int s = 0;
    while (n > 0)
    {
        s += n % 10;
        n /= 10;
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