// https://www.spoj.com/PTIT/problems/P167PROC/
// P167PROC - ROUND 7C - Ký tự lặp trong 2 xâu liên tiếp

#include <bits/stdc++.h>
using namespace std;

int n, res;
string a[15], b[15];
bool dd[15];

void init()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    memset(dd, 0, sizeof(dd));
    res = 1e9;
}

int dem(string a, string b)
{
    int xh1[26], xh2[26];
    for (int i = 0; i < a.length(); i++)
        xh1[a[i] - 'A']++;
    for (int i = 0; i < b.length(); i++)
        xh2[b[i] - 'A']++;
    int d = 0;
    for (int i = 0; i < 26; i++)
        if (xh1[i] && xh2[i])
            d++;
    return d;
}

void Try(int i, int count)
{
    if (count >= res)
        return;
    for (int j = 1; j <= n; j++)
    {
        if (!dd[j])
        {
            b[i] = a[j];
            dd[j] = 1;
            int d = dem(b[i], b[i - 1]); // Số ký tự lặp lại trong 2 xâu liên tiếp
            // if (count + d >= res)
            //     return;
            if (i == n)
            {
                if (count + d < res)
                    res = count + d;
            }
            else
                Try(i + 1, count + d);
            dd[j] = 0;
        }
    }
}

int main()
{
    init();
    Try(1, 0);
    cout << res;
    return 0;
}