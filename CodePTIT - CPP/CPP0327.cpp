// https://code.ptit.edu.vn/student/question/CPP0327
// CHIA HẾT CHO 5

#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

void TestCase()
{
    string s;
    cin >> s;
    long long n = 0;
    for (auto x : s) {
        n = n * 2 +(x - '0');
        n %= 5;
    }
    if (n == 0) cout << "Yes\n";
    else cout << "No\n";
}

int main()
{
    int T;
    cin >> T;
    while (T--) TestCase();
    return 0;
}