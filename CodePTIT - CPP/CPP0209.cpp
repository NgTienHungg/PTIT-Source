// https://code.ptit.edu.vn/student/question/CPP0209
// TÍNH TỔNG TRONG KHOẢNG

#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

void TestCase()
{
    int n, q;
    cin >> n >> q;
    vector<int> v(n + 1, 0);
    for (int i = 1; i <= n; ++i)
    {
        cin >> v[i];
        v[i] += v[i - 1];
    }
    for (int i = 1; i <= q; ++i)
    {
        int l, r;
        cin >> l >> r;
        cout << v[r] - v[l - 1] << endl;
    }
}

int main()
{
    int T;
    cin >> T;
    while (T--)
        TestCase();
    return 0;
}