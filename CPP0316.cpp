// https://code.ptit.edu.vn/student/question/CPP0316
// SỐ MAY MẮN - 2

#include <bits/stdc++.h>
using namespace std;

void solve(int &num)
{
    int sum = 0;
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }
    num = sum;
}

void TestCase()
{
    string s;
    cin >> s;
    int num = 0;
    for (auto x : s) {
        num += x - '0';
    }
    while (num >= 10) {
        solve(num);
    }
    cout << (num == 9) << endl;
}

int main()
{
    int T;
    cin >> T;
    while (T--) TestCase();
    return 0;
}