// https://luyencode.net/problem/TNV
// TNV - Đội tình nguyện viên

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; ++i)
        cin >> a[i];

    map<int, int> mp;
    for (int i = 0; i < n; ++i)
        mp[a[i]]++;

    int x = 0, y = 0;
    for (map<int, int>::iterator it = mp.begin(); it != mp.end(); it++)
    {
        if ((*it).second > y)
        {
            x = (*it).first;
            y = (*it).second;
        }
        else if ((*it).second == y && (*it).first > x)
        {
            x = (*it).first;
        }
    }
    cout << x << " " << y;
    return 0;
}