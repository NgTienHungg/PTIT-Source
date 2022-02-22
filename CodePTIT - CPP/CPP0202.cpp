// https://code.ptit.edu.vn/student/question/CPP0202
// KHOẢNG CÁCH NHỎ NHẤT

#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

void TestCase()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; ++i)
        cin >> a[i];
    sort(a, a + n);
    int r = 1e6;
    for (int i = 1; i < n; ++i)
        r = min(r, a[i] - a[i - 1]);
    cout << r << endl;
}

int main()
{
    int T;
    cin >> T;
    while (T--)
        TestCase();
    return 0;
}