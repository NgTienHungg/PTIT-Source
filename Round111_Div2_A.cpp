// https://codeforces.com/contest/1550/problem/A
// A. Find The Array


#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

void TestCase()
{
    int s;
    cin >> s;
    int x = 1, sum = 1, res = 1;
    while (sum < s)
    {
        x += 2;
        sum += x;
        res += 1;
    }
    cout << res << endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int T;
    cin >> T;
    while (T--)
        TestCase();
    return 0;
}