// https://code.ptit.edu.vn/student/question/CPP0325
// CHIA HẾT CHO 11

#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

void TestCase()
{
    string s;
    cin >> s;
    int res = 0;
    for (auto x : s) {
        res = res * 10 + (x - '0');
        res %= 11;
    }
    cout << (res == 0) << endl;
}

int main()
{
    int T;
    cin >> T;
    while (T--) TestCase();
    return 0;
}