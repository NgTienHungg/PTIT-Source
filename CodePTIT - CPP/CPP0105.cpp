// https://code.ptit.edu.vn/student/question/CPP0105
// SỐ LỘC PHÁT

#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

void TestCase()
{
    string s;
    cin >> s;
    for (auto x : s)
    {
        if (x != '0' && x != '6' && x != '8')
        {
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";
}

int main()
{
    int T;
    cin >> T;
    while (T--)
        TestCase();
    return 0;
}