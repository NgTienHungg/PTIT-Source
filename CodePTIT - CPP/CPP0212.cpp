// https://code.ptit.edu.vn/student/question/CPP0212
// TÍNH GIÁ TRỊ ĐA THỨC

#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
const int mod = 1e9 + 7;

void TestCase()
{
    int n, x;
    cin >> n >> x;
    int a[n];
    for (int i = 0; i < n; ++i)
        cin >> a[i];
    reverse(a, a + n);
    long long t = 1, s = 0;
    for (int i = 0; i < n; ++i)
    {
        s = (s + t * a[i]) % mod;
        t = t * x % mod;
    }
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