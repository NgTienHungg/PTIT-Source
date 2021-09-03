// https://code.ptit.edu.vn/student/question/CPP0117
// TÍNH TỔNG CHỮ SỐ

#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int solve(int n)
{
    int sum = 0;
    while (n > 0)
    {
        sum += n % 10;
        n /= 10;
    }
    if (sum >= 10)
        return solve(sum);
    return sum;
}

void TestCase()
{
    int n;
    cin >> n;
    cout << solve(n) << endl;
}

int main()
{
    int T;
    cin >> T;
    while (T--)
        TestCase();
    return 0;
}