// https://code.ptit.edu.vn/student/question/CPP0447
// LIỆT KÊ K PHẦN TỬ LỚN NHẤT

#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

void TestCase()
{
    int n, k;
    cin >> n >> k;
    int a[n];
    for (auto &x : a) cin >> x;
    sort(a, a + n, greater<int>());
    for (int i = 0; i < n; ++i) {
        cout << a[i] << " ";
        k--;
        if (k == 0) break;
    }
    cout << endl;
}

int main()
{
    int T;
    cin >> T;
    while (T--) TestCase();
    return 0;
}