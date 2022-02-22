// https://www.spoj.com/PTIT/problems/P151PROA/
// P151PROA - ROUND 1A - Các cặp giai thừa

#include <bits/stdc++.h>
using namespace std;

void TestCase()
{
    int n;
    string s;
    cin >> n >> s;
    int dd[10] = {0};
    for (int i = 0; i < n; ++i)
    {
        int x = s[i] - '0';
        if (x == 2)
            dd[2] += 1;
        else if (x == 3)
            dd[3] += 1;
        else if (x == 4)
        {
            dd[2] += 2;
            dd[3] += 1;
        }
        else if (x == 5)
            dd[5] += 1;
        else if (x == 6)
        {
            dd[3] += 1;
            dd[5] += 1;
        }
        else if (x == 7)
            dd[7] += 1;
        else if (x == 8)
        {
            dd[2] += 3;
            dd[7] += 1;
        }
        else if (x == 9)
        {
            dd[2] += 1;
            dd[3] += 2;
            dd[7] += 1;
        }
    }
    for (int i = 9; i >= 2; --i)
    {
        if (dd[i] > 0)
        {
            for (int j = 1; j <= dd[i]; ++j)
                cout << i;
        }
    }
    cout << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        TestCase();
    return 0;
}