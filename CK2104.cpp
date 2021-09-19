// https://code.itptit.com/problems/100035
// Tôi đã lắp dây cáp mạng cho ông lão dân tộc như thế nào?

#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

void TestCase()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int a[n], SUM = 0;
    for (int i = 0; i < n; ++i)
    {
        a[i] = s[i] - '0';
        SUM += a[i];
    }

    /* Chia thành càng nhiều mảng, tổng mỗi mảng càng nhỏ, càng ít lần xét */
    for (int i = SUM - 1; i >= 2; --i)
    {
        if (SUM % i == 0)
        {
            int sum = SUM / i, x = 0;
            bool ok = 1;
            for (int j = 0; j < n; j++)
            {
                x += a[j];
                if (x == sum)
                    x = 0;
                else if (x > sum)
                {
                    ok = 0;
                    break;
                }
            }
            if (ok)
            {
                cout << "YES\n";
                return;
            }
        }
    }
    cout << "NO\n";
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int T;
    cin >> T;
    while (T--)
        TestCase();
    return 0;
}