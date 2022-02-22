// https://code.ptit.edu.vn/student/question/CPP0431
// ĐẾM CẶP PHẦN TỬ CÓ HIỆU NHỎ HƠN K

#include <bits/stdc++.h>
using namespace std;

void TestCase()
{
    int n, k;
    cin >> n >> k;
    int a[n];
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    sort(a, a + n);
    long long res = 0;
    for (int i = 0; i < n; ++i) {
        int p = upper_bound(a + i + 1, a + n, a[i] + k - 1) - (a + i + 1);
        res += p;
    }
    cout << res << endl;
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