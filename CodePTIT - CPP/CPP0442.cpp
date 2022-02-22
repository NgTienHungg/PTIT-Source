// https://code.ptit.edu.vn/student/question/CPP0442
// TÌM KIẾM NHỊ PHÂN

#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

bool bs(int a[], int l, int r, int x) {
    while (l <= r) {
        int m = (l + r) / 2;
        if (a[m] == x) return 1;
        if (a[m] > x) r = m - 1;
        else l = m + 1;
    }
    return 0;
}

void TestCase()
{
    int n, x;
    cin >> n >> x;
    int a[n];
    for (auto &so : a) cin >> so;
    sort(a, a + n);
    if (bs(a, 0, n - 1, x)) cout << "1\n";
    else cout << "-1\n";
}

int main()
{
    int T;
    cin >> T;
    while (T--) TestCase();
    return 0;
}