// https://code.ptit.edu.vn/student/question/CPP0113
// SỐ MAY MẮN

#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

void TestCase()
{
    string s;
    cin >> s;
    int l = s.length();
    if (l == 1)
        cout << "0\n";
    else
    {
        string x = s.substr(l - 2, 2);
        x == "86" ? cout << "1\n" : cout << "0\n";
    }
}

int main()
{
    int T;
    cin >> T;
    while (T--)
        TestCase();
    return 0;
}