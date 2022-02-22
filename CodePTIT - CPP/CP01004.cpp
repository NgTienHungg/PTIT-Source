// https://code.ptit.edu.vn/student/question/CP01004
// SỐ XUẤT HIỆN NHIỀU NHẤT

#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int d[1000001];

void TestCase()
{
    memset(d, 0, sizeof(d));
    int n;
    cin >> n;
    int res, maxx = 0;
    for (int i = 1; i <= n; ++i)
    {
        int x;
        cin >> x;
        d[x]++;
        if (d[x] > maxx)
        {
            res = x;
            maxx = d[x];
        }
    }
    if (maxx > n / 2)
        cout << res << endl;
    else
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