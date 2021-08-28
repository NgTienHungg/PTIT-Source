// https://www.spoj.com/PTIT/problems/P156SUMH/
// P156SUMH - ROUND 6H - Kim cương

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n / 2; i++)
    {
        string res(i * 2 - 1, 'D');
        while (res.size() < n)
            res = "*" + res + "*";
        cout << res << endl;
    }
    string res(n, 'D');
    cout << res << endl;
    for (int i = n / 2; i >= 1; i--)
    {
        string res(i * 2 - 1, 'D');
        while (res.size() < n)
            res = "*" + res + "*";
        cout << res << endl;
    }
    return 0;
}