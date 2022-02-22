// https://code.ptit.edu.vn/student/question/CPP0322
// TỔNG HAI SỐ NGUYÊN LỚN

#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

string Sum(string a, string b)
{
    int len = max(a.length(), b.length());
    while (a.length() < len)
        a = "0" + a;
    while (b.length() < len)
        b = "0" + b;

    string res = "";
    int remember = 0;
    for (int i = len - 1; i >= 0; i--)
    {
        int digit = (a[i] - '0') + (b[i] - '0') + remember;
        remember = digit / 10;
        res = char(digit % 10 + '0') + res;
    }
    
    if (remember > 0)
        res = char(remember + '0') + res;
    return res;
}

void TestCase()
{
    string a, b;
    cin >> a >> b;
    cout << Sum(a, b) << endl;
}

int main()
{
    int T;
    cin >> T;
    while (T--) TestCase();
    return 0;
}