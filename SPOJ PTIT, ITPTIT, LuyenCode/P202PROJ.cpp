// https://www.spoj.com/PTIT/problems/P202PROJ/
// P202PROJ - Đếm cặp

#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin >> s;
    int dem = 0;
    for (int i = 0; i < s.length(); i++)
        if (s[i] == '2')
            dem++;
    long long sum = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '1')
            sum += dem;
        else if (s[i] == '2')
            dem--;
    }
    cout << sum;
    return 0;
}