// https://www.spoj.com/PTIT/problems/BCBIGNUM/
// BCBIGNUM - Xử lý số nguyên lớn

#include <bits/stdc++.h>
using namespace std;

// Cộng 2 số nguyên lớn
string Sum(string a, string b)
{
    int len = max(a.length(), b.length());
    while (a.length() < len)
        a = "0" + a;
    while (b.length() < len)
        b = "0" + b;
    string res = {};
    int remember = 0;
    for (int i = len - 1; i >= 0; i--)
    {
        int num = (a[i] - '0') + (b[i] - '0') + remember;
        remember = num / 10;
        res = char(num % 10 + '0') + res;
    }
    if (remember > 0)
        res = char(remember + '0') + res;
    return res;
}

// Trừ 2 số nguyên lớn
string Minus(string a, string b)
{
    int len = max(a.length(), b.length());
    while (a.length() < len)
        a = "0" + a;
    while (b.length() < len)
        b = "0" + b;
    bool check = 1; // Kiểm tra a > b, nếu a < b thì check = 0;
    if (a == b)
        return "0";
    if (a < b)
    {
        swap(a, b);
        check = 0;
    }
    string res = {};
    int remember = 0;
    for (int i = len - 1; i >= 0; i--)
    {
        int num = (a[i] - '0') - (b[i] - '0') - remember;
        if (num < 0)
        {
            remember = 1;
            num += 10;
        }
        else
            remember = 0;
        res = char(num + '0') + res;
    }
    // Bỏ các chữ số 0 vô nghĩa ở đầu res
    while (res[0] == '0')
        res.erase(0, 1);
    // Nếu a < b, thêm dấu -
    if (check == 0)
        res = "-" + res;
    return res;
}

// Nhân 2 số nguyên lớn
string Multiply(string a, string b)
{
    if (a == "0" || b == "0")
        return "0";
    int len1 = a.length();
    int len2 = b.length();
    int len = len1 + len2;
    string ans(len, '0');
    for (int i = len2 - 1; i >= 0; i--)
    {
        int t = len2 - 1 - i; // Số chữ số 0 cuối cùng của res (theo quy tắc nhân)
        string res(t, '0');
        int remember = 0;
        for (int j = len1 - 1; j >= 0; j--)
        {
            int num = (a[j] - '0') * (b[i] - '0') + remember;
            remember = num / 10;
            res = char(num % 10 + '0') + res;
        };
        if (remember > 0)
            res = char(remember + '0') + res;
        ans = Sum(ans, res);
    }
    while (ans[0] == '0')
        ans.erase(0, 1);
    return ans;
}

int main()
{
    string a, b;
    cin >> a >> b;
    cout << Sum(a, b) << endl
         << Minus(a, b) << endl
         << Multiply(a, b);
    return 0;
}

//! A - B: chú ý A = B, A < B
//! A * B: chú ý A = 0 hoặc B =0