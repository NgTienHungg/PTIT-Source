// https://codeforces.com/group/eFlt2UuXYv/contest/332066/problem/D
// D. Rút gỗ

#include <bits/stdc++.h>
using namespace std;

void TestCase()
{
    long long n, k;
    cin >> n >> k;
    if ((n / k) % 2 == 1)
        cout << "YES";
    else
        cout << "NO";
    cout << endl;
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