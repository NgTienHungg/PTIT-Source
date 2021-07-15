// https://codeforces.com/contest/1550/problem/B
// B. Maximum Cost Deletion

#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int solve(string s, int n, int a, int b, char c)
{
    int res = 0;
    int i = 0;
    while (i < s.length())
    {
        if (s[i] == c)
        {
            int j = i, l = 0;
            while (j < s.length() && s[j] == c)
            {
                l++;
                j++;
            }
            res += a * l + b;
            s.erase(i, l);
        }
        else
            i++;
    }
    if (s.length() > 0)
        res += a * s.length() + b;
    return res;
}

void TestCase()
{
    int n, a, b;
    cin >> n >> a >> b;
    string s;
    cin >> s;
    int d1 = solve(s, n, a, b, '0');
    int d2 = solve(s, n, a, b, '1');
    int d3 = n * (a + b);
    cout << max({d1, d2, d3}) << endl;
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