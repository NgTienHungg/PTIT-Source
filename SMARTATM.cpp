// https://luyencode.net/problem/SMARTATM
// SMARTATM - Máy rút tiền thông minh

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int a[n];
    for (int i = 0; i < n; ++i)
        cin >> a[i];

    vector<int> f(m + 1, 1e6);
    f[0] = 0;
    for (int i = 1; i <= m; ++i)
    {
        bool ok = 0;
        for (int j = 0; j < n; ++j)
        {
            if (a[j] <= i)
            {
                if (a[j] == i)
                {
                    f[i] = 1;
                    ok = 1;
                }
                else if (f[i - a[j]] + 1 < f[i] && f[i - a[j]] != 0)
                {
                    f[i] = f[i - a[j]] + 1;
                    ok = 1;
                }
            }
        }
        if (!ok)
            f[i] = 0;
    }

    f[m] == 0 ? cout << -1 : cout << f[m];
    return 0;
}

/*
Với mỗi j, a[j] <= i, ta tìm số tờ tiền nhỏ nhất để tổng bằng i (i <= m).
Ví dụ Test: n = 3, m = 130, a[] = {10, 60, 100}
- Xét tổng i = 0, không phải trả tiền, f[0] = 0
- Xét tổng i = 1, không có cách trả tiền nào để tổng = 1, f[1] = 0
...
- Xét tổng i = 10, có 1 tờ tiền a[j] = 10 <= i:
    a[j] = i => trả bằng 1 tờ tiền a[j] luôn, f[i] = 1
- Xét tổng i = 11, có 1 tờ tiền a[j] = 10 <= i:
    f[i] = f[i - a[j]] + 1 = f[11 - 10] + 1 = f[1] + 1
    Do không có cách nào để trả số tiền = 1 nên f[11] = 0
...
- Xét tổng i = 20, có 1 tờ tiền a[j] = 10 <= i:
    f[i] = f[i - a[j]] + 1 = f[20 - 10] + 1 = f[10] + 1 = 2
...
- Xét tổng i = 50, có 1 tờ tiền a[j] = 10 <= i:
    f[i] = f[i - a[j]] + 1 = f[50 - 10] + 1 = f[40] + 1 = 5
- Xét tổng i = 60, có 2 tờ tiền a[j] = 10  và a[j] = 60 <= i:
    Nếu chọn tờ tiền a[j] = 10: f[i] = f[i - a[j]] + 1 = f[60 - 10] + 1 = f[50] + 1 = 6
    Nếu chọn tờ tiền a[j] = 60: a[j] = i => trả bằng 1 tờ tiền a[j] = 60 luôn, f[60] = 1
    => f[60] = 1
- Xét tổng i = 70, có 2 tờ tiền a[j] = 10  và a[j] = 60 <= i:
    Nếu chọn tờ tiền a[j] = 10: f[i] = f[i - a[j]] + 1 = f[70 - 10] + 1 = f[60] + 1 = 2
    Nếu chọn tờ tiền a[j] = 60: f[i] = f[i - a[j]] + 1 = f[70 - 60] + 1 = f[10] + 1 = 2
    => f[70] = 2
...
- Xét tổng i = 100, f[100] = 1 (100)
- Xét tổng i = 110, f[110] = 2 (10, 100)
- Xét tổng i = 120, có 3 tờ tiền a[j] = 10  và a[j] = 60 và a[j] = 100 <= i:
    Nếu chọn tờ tiền a[j] = 10: f[i] = f[i - a[j]] + 1 = f[120 - 10] + 1 = f[110] + 1 = 3
    Nếu chọn tờ tiền a[j] = 60: f[i] = f[i - a[j]] + 1 = f[120 - 60] + 1 = f[60] + 1 = 2
    Nếu chọn tờ tiền a[j] = 100: f[i] = f[i - a[j]] + 1 = f[120 - 100] + 1 = f[20] + 1 = 3
    => f[120] = 2
- Xét tổng i = 130, có 3 tờ tiền a[j] = 10  và a[j] = 60 và a[j] = 100 <= i:
    Nếu chọn tờ tiền a[j] = 10: f[i] = f[i - a[j]] + 1 = f[130 - 10] + 1 = f[120] + 1 = 3
    Nếu chọn tờ tiền a[j] = 60: f[i] = f[i - a[j]] + 1 = f[130 - 60] + 1 = f[70] + 1 = 3
    Nếu chọn tờ tiền a[j] = 100: f[i] = f[i - a[j]] + 1 = f[130 - 100] + 1 = f[30] + 1 = 4
    => f[130] = 3
*/