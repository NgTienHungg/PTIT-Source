// https://code.itptit.com/problems/100008
// Tạo số chính phương

#include <bits/stdc++.h>
using namespace std;

string s;
int len;
bool a[15];
vector<string> v;

bool isSquare(string s)
{
    /* Xử lý num bằng stoi() hoặc atoi(s.c_str()) và int sq bị sai */
    long long num = 0;
    for (int i = 0; i < s.length(); ++i)
        num = num * 10 + (s[i] - '0');

    long long sq = sqrt(num);
    return (long long)(sq * sq) == num;
}

void solve()
{
    string temp = "";
    for (int i = 0; i < len; ++i)
        if (a[i])
            temp = temp + s[i];

    if (temp[0] == '0' || temp.length() == 0)
        return;

    if (isSquare(temp))
        v.push_back(temp);
}

void Try(int i)
{
    for (int j = 0; j <= 1; ++j)
    {
        a[i] = j;
        if (i == len - 1)
            solve();
        else
            Try(i + 1);
    }
}

bool cmp(string a, string b) { return a.length() > b.length(); }

int main()
{
    cin >> s;
    len = s.length();
    Try(0);

    if (v.size() == 0)
        cout << -1;
    else
    {
        sort(v.begin(), v.end(), cmp);
        cout << len - v[0].length();
    }
    return 0;
}