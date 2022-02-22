// https://luyencode.net/problem/UPWORD
// UPWORD - Đếm từ viết hoa

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int d = 0;
    for (int i = 0; i < s.length(); ++i)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
        {
            d++;
            while (s[i] >= 'A' && s[i] <= 'Z')
                i++;
        }
    }
    cout << d;
    return 0;
}