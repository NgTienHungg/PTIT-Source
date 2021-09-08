// https://code.ptit.edu.vn/student/question/CPP0328
// CHIA HẾT CHO 8

#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int solve(string s, int k)
{
    int d = 0;
    for (int i = 0; i < s.length(); ++i) {
        int n = 0;
        for (int j = i; j < s.length(); ++j) {
            n = n * 10 + (s[j] - '0');
            n %= k;
            if (n == 0)
                d++;
        }
    }
    return d;
}

void TestCase()
{
    string s;
    cin >> s;
    cout << solve(s, 8) - solve(s, 24) << endl;
}

int main()
{
    int T;
    cin >> T;
    while (T--) {
        TestCase();
    }
    return 0;
}