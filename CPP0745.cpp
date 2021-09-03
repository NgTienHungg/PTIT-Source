// https://code.ptit.edu.vn/student/question/CPP0745
// TÍNH SỐ FIBONACCI LỚN

#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
const int mod = 1e9 + 7;

long long f[1001];

void TestCase()
{
    int n;
    cin >> n;
    cout << f[n] << endl;
}

int main()
{
    f[0] = 0, f[1] = 1;
    for (int i = 2; i <= 1000; ++i) {
        f[i] = f[i - 1] + f[i - 2];
        f[i] %= mod;
    }
    int T;
    cin >> T;
    while (T--) TestCase();
    return 0;
}