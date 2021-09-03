// https://code.ptit.edu.vn/student/question/CPP0320
// SỐ ĐẦY ĐỦ

#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

void TestCase()
{
    string s;
    cin >> s;
    if (s[0] == '0') {
        cout << "INVALID\n";
        return;
    }
    bool dd[10] = {0};
    for (auto x : s) {
        if (x >= '0' && x <= '9')
            dd[x - '0'] = 1;
        else {
            cout << "INVALID\n";
            return;
        }
    }
    for (auto x : dd) {
        if (x == 0) {
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