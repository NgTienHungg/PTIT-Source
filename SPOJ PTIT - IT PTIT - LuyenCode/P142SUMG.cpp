// https://www.spoj.com/PTIT/problems/P142SUMG/
// P142SUMG - ROUND 2G - Mã hóa

#include <bits/stdc++.h>
using namespace std;

int distance(string s)
{
    int dd[127] = {0};
    int maxD = 0;
    for (int i = 0; i < s.length(); ++i)
    {
        if (s[i] == ' ')
            continue;
        dd[s[i]]++;
        maxD = max(maxD, dd[s[i]]);
    }
    int sl = 0, pos;
    for (int i = 65; i <= 90; ++i)
    {
        if (dd[i] == maxD)
        {
            sl++;
            pos = i;
        }
        if (sl > 1)
            return -1;
    }
    int d = pos >= 'E' ? pos - 'E' : pos - 'E' + 26;
    return d;
}

void TestCase()
{
    string s;
    getline(cin, s);
    int d = distance(s);
    if (d == -1)
        cout << "NOT POSSIBLE\n";
    else
    {
        cout << d << " ";
        for (int i = 0; i < s.length(); ++i)
        {
            if (s[i] == ' ')
                continue;
            s[i] -= d;
            if (s[i] < 'A')
                s[i] += 26;
        }
        cout << s << endl;
    }
}

int main()
{
    int T;
    cin >> T;
    cin.ignore();
    while (T--)
        TestCase();
    return 0;
}