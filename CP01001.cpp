// https://code.ptit.edu.vn/student/question/CP01001
// TÍNH TỔNG

#include <bits/stdc++.h>
using namespace std;

void TestCase()
{
    long long n;
    cin >> n;
    long long s = (n + 1) * n / 2;
    cout << s << endl;
}

int main()
{
    int T;
    cin >> T;
    while (T--)
        TestCase();
    return 0;
}