// https://www.spoj.com/PTIT/problems/PTIT014D/
// PTIT014D - 2014 Bài D - Số may mắn

#include <bits/stdc++.h>
using namespace std;

int sumCS(string s)
{
    int sum = 0;
    for (int i = 0; i < s.length(); i++)
        sum += s[i] - '0';
    return sum;
}

void solve()
{
    string s;
    cin >> s;
    int sum = sumCS(s); // Tổng các cs của n
    int result = 1;
    while (sum != 9)
    {
        if (sum < 10)
        {
            result = 0;
            break;
        }
        sum = sumCS(to_string(sum)); // Kiểm tra tiếp tổng các cs của sum
    }
    cout << result << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}