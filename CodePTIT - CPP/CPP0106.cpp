// https://code.ptit.edu.vn/student/question/CPP0106
// SỐ THUẬN NGHỊCH

#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

void TestCase()
{
    string s;
    cin >> s;
    string x = s;
    reverse(x.begin(), x.end());
    x == s ? cout << "YES\n" : cout << "NO\n";
}

int main()
{
    int T;
    cin >> T;
    while (T--)
        TestCase();
    return 0;
}