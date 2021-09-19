// https://luyencode.net/problem/PALI
// PALI - Số Palindrome

#include <bits/stdc++.h>
using namespace std;

bool pali(string s)
{
    string rs = s;
    reverse(rs.begin(), rs.end());
    return rs == s;
}

int main()
{
    int n;
    cin >> n;

    vector<string> v;
    for (int i = 0; i < n; ++i)
    {
        string s;
        cin >> s;
        if (pali(s))
            v.push_back(s);
    }
    for (int i = 0; i < v.size(); ++i)
        cout << v[i] << " ";
    return 0;
}