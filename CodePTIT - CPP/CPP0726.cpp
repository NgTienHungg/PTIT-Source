// https://code.ptit.edu.vn/student/question/CPP0726
// PHÉP CHIA DƯ CỦA TÍCH HAI SỐ

#include <bits/stdc++.h>
using namespace std;

long long Mul(long long a, long long b, long long c)
{
    if (b == 0) return 0;
    if (b == 1) return a % c;
    long long temp = Mul(a, b / 2, c);
    long long res = 2* temp % c;
    if (b & 1) return (res + a) % c;
    return res;
}

void TestCase()
{
    long long a, b, c;
    cin >> a >> b >> c;
    cout << Mul(a, b, c) << endl;
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