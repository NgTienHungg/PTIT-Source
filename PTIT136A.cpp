// https://www.spoj.com/PTIT/problems/PTIT136A/
// PTIT136A - Cảnh báo

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    map<string, int> mp;
    int res = 0;
    for (int i = 1; i <= n; ++i)
    {
        string s;
        cin >> s;
        mp[s]++;
        if (mp[s] - 1 > i - mp[s])
            res += 1;
    }
    cout << res;
    return 0;
}