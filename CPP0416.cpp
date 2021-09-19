// https://code.ptit.edu.vn/student/question/CPP0416
// ĐẾM CẶP PHẦN TỬ CÓ TỔNG BẰNG K

#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

void TestCase()
{
    int n, k;
    cin >> n >> k;
    int a[n];
    for (auto &x : a)
        cin >> x;
    sort(a, a + n);
    int d = 0;
    for (int i = 0; i < n; ++i)
    {
        if (a[i] > k / 2)
            break;
        int l = lower_bound(a + i + 1, a + n, k - a[i]) - a; // index đầu tiên có phần tử (k - a[i]) kể từ vị trí i + 1
        if (l != n)
        {
            int u = upper_bound(a + i + 1, a + n, k - a[i]) - a; // index đầu tiên có phần tử > (k - a[i]) kể từ vị trí i + 1
            d += u - l;
        }
    }
    cout << d << endl;
}

int main()
{
    int T;
    cin >> T;
    while (T--)
        TestCase();
    return 0;
}