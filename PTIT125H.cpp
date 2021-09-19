// spoj.com/PTIT/problems/PTIT125H/

#include <bits/stdc++.h>
using namespace std;

// Thêm * vào các vị trí đặt nước
string changeString(string s)
{
    string res = {};
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == 'S')
        {
            res.insert(res.length(), "*S");
        }
        else if (s[i] == 'L')
        {
            res.insert(res.length(), "*LL");
            i++;
        }
    }
    res.push_back('*');
    return res; // res = *S*LL*LL*S*S*LL*
}

bool check(string str)
{
    if (str[0] == 'S' && str[1] == '*')
        return 1; // str = S*
    if (str[0] == 'L' && str[1] == '*')
        return 1; // str = L*
    if (str[0] == '*' && str[1] == 'S')
        return 1; // str = *S
    if (str[0] == '*' && str[1] == 'L')
        return 1; // str = *L
    return 0;     // str = LL
}

/*
Xét 2 vị trí liên tiếp của res:
Nếu có * thì coi là 1 người có nước, xóa str khỏi res
Nếu không có * thì 1 người không có nước, xóa 1 kí tự khỏi res
*/

void solve(string res)
{
    int count = 0;
    while (res.size() >= 2)
    {
        string str = res.substr(0, 2);
        if (check(str))
        {
            count++;
            res.erase(0, 2);
        }
        else
        {
            res.erase(0, 1);
        }
    }
    cout << count;
}

int main()
{
    int n;
    cin >> n;
    cin.ignore();
    string s = {};
    cin >> s;
    s.resize(n);
    string res = changeString(s);
    solve(res);
    return 0;
}