// https://code.ptit.edu.vn/student/question/CPP0324
// PHÉP CHIA DƯ CỦA LŨY THỪA SỐ NGUYÊN LỚN

#include <bits/stdc++.h>
using namespace std;

long long mod(string s, long long m)
{
    long long r = 0;
    for (auto x : s) {
        r = r * 10 + (x - '0');
        r %= m;
    }
    return r;
}

long long Pow(long long a, long long b, long long m)
{
    if (b == 0) return 1;
    if (b == 1) return a % m;
    long long t = Pow(a, b / 2, m);
    long long r = t * t % m;
    if (b % 2 == 0) return r;
    return r * a % m;
}

void TestCase()
{
    string a;
    long long b, m;
    cin >> a >> b >> m;
    long long x = mod(a, m);
    cout << Pow(x, b, m) << endl;
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