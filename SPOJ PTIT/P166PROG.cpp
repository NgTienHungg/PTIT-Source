// https://www.spoj.com/PTIT/problems/P166PROG/
// P166PROG - ROUND 6G - Khóa vòng

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string s, t;
    cin >> s >> t;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        int d = abs((s[i] - '0') - (t[i] - '0'));
        if (d <= 5)
            count += d;
        else
            count += 10 - d;
    }
    cout << count;
    return 0;
}