// https://www.spoj.com/PTIT/problems/PTIT121K/
// PTIT121K - Đường đi lớn nhất

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int a[105][105];
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            cin >> a[i][j];

    string dp[105][105];
    for (int i = 1; i <= n; i++)
    {
        dp[0][i] = "";
        dp[i][0] = "";
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            char c = char(a[i][j] + '0');
            dp[i][j] = max(dp[i][j - 1], dp[i - 1][j]) + c;
        }
    }

    string s = dp[n][n];
    while (s.length() % 4 != 0)
        s = "0" + s;

    string res = "";
    for (int i = 0; i < s.length(); i += 4)
    {
        string tmp = s.substr(i, 4);
        int x = 0;
        for (int i = 0; i < 4; i++)
            x = x * 2 + (tmp[i] - '0');

        char c;
        if (x < 10)
            c = x + '0';
        else
            c = (x - 10) + 'A';
        res.push_back(c);
    }

    while (res[0] == '0' && res.size() > 0)
        res.erase(0, 1);

    if (res.size() == 0)
        cout << 0;
    else
        cout << res;
    return 0;
}

// Chú ý phần đổi cơ số 16, loại bỏ các chứ số 0 không cần thiết trước khi in kết quả