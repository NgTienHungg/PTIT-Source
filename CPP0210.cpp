// https://code.ptit.edu.vn/student/question/CPP0210
// HIỆU LỚN NHẤT CỦA CẶP PHẦN TỬ ĐÚNG THỨ TỰ

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
    int r = -1;
    for (int i = 0; i + 1 < n; ++i)
    {
        for (int j = i + 1; j < n; ++j)
        {
            if (a[j] <= a[i]) // note
                continue;
            r = max(r, a[j] - a[i]);
        }
    }
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