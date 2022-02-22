// https://code.ptit.edu.vn/student/question/CPP0443
// SỐ NHỎ NHẤT CÒN THIẾU

#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

void TestCase()
{
    int n;
    cin >> n;
    int a[n - 1];
    vector<bool> dd(n + 1, 0);
    for (auto &x : a) {
        cin >> x;
        dd[x] = 1;
    }
    for (int i = 1; i <= n; ++i) {
        if (!dd[i]) {
            cout << i << endl;
            return;
        }
    }
}

int main()
{
    int T;
    cin >> T;
    while (T--) TestCase();
    return 0;
}