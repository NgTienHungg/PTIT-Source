// https://www.spoj.com/PTIT/problems/P18QPROF/
// P18QPROF - QUALIFY ROUND 2018 F - SO SÁNH XÂU CON

#include <bits/stdc++.h>
#define FOR(i, a, b) for (int i = a; i <= b; i++)
#define mod 1e9 + 7
using namespace std;
typedef long long ll;
typedef double db;

struct Point
{
    int kt[127] = {0}; // kt = kí tự
};
Point p[1000000];

void solveInputString(string s)
{
    FOR(i, 1, s.length())
    {
        int num = int(s[i]);
        FOR(j, 97, 122)
        {
            if (j == num)
                p[i].kt[j] = p[i - 1].kt[j] + 1;
            else
                p[i].kt[j] = p[i - 1].kt[j];
        }
    }
}

bool check(int a, int b, int c, int d)
{
    FOR(i, 97, 122)
    {
        if (p[b].kt[i] - p[a - 1].kt[i] != p[d].kt[i] - p[c-1].kt[i])
            return 0;
    }
    return 1;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string s;
    cin >> s;
    s = "#" + s;
    solveInputString(s);
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        if (check(a, b, c, d))
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}