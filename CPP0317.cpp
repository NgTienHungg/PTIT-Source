// https://code.ptit.edu.vn/student/question/CPP0317
// SỐ ĐẸP

#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

bool reversible(string s)
{
    string r(s.rbegin(), s.rend());
    return r == s;
}

bool even(string s)
{
    for (auto x : s)
    {
        if ((x - '0') % 2 == 1)
            return 0;
    }
    return 1;
}

void TestCase()
{
    string s;
    cin >> s;
    (reversible(s) && even(s)) ? cout << "YES\n" : cout << "NO\n";
}

int main()
{
    int T;
    cin >> T;
    while (T--)
        TestCase();
    return 0;
}