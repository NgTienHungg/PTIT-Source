// https://code.ptit.edu.vn/student/question/CPP0203
// SỐ NHỎ NHẤT CHƯA XUẤT HIỆN

#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

void TestCase()
{
    int n;
    cin >> n;
    vector<bool> v(n + 1, 0);
    for (int i = 1; i <= n; ++i) {
        int x;
        cin >> x;
        if (x >= 1 && x <= n)
            v[x] = 1;
    }
    for (int i = 1; i <= n; ++i) {
        if (!v[i]) {
            cout << i << endl;
            return;
        }
    }
    cout << n + 1 << endl;
}

int main()
{
    int T;
    cin >> T;
    while (T--)
        TestCase();
    return 0;
}