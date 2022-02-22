// https://www.spoj.com/PTIT/problems/P135SUMG/
// P135SUMG - SUM5 G - Xâu đặc biệt

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll res = 0;

int check(char c)
{
    if (c == '_')
        return 0;
    if (c == 'L')
        return 1;
    if (c == 'A' || c == 'I' || c == 'E' || c == 'O' || c == 'U')
        return 2;
    return 3;
}

void Try(string &s, int i, int NA, int PA, int L, ll SoCach)
{
    if (i == s.length())
    {
        if (L > 0)
            res += SoCach;
        return;
    }
    if (check(s[i]))
    {
        if (check(s[i]) == 1 && PA < 2)
            Try(s, i + 1, 0, PA + 1, L + 1, SoCach);
        else if (check(s[i]) == 2 && NA < 2)
            Try(s, i + 1, NA + 1, 0, L, SoCach);
        else if (check(s[i]) == 3 && PA < 2)
            Try(s, i + 1, 0, PA + 1, L, SoCach);
    }
    else
    {
        if (NA < 2)
            Try(s, i + 1, NA + 1, 0, L, SoCach * 5);
        if (PA < 2)
        {
            Try(s, i + 1, 0, PA + 1, L + 1, SoCach);
            Try(s, i + 1, 0, PA + 1, L, SoCach * 20);
        }
    }
}

int main()
{
    string s;
    cin >> s;
    Try(s, 0, 0, 0, 0, 1);
    cout << res;
    return 0;
}

// NA, PA lần lượt là số ký tự nguyên âm, phụ âm trong 3 ký tự liên tiếp
// L là số ký tự L trong cả xâu