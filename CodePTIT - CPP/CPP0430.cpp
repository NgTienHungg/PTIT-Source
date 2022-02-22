// https://code.ptit.edu.vn/student/question/CPP0430
// BỔ SUNG PHẦN TỬ

#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

void TestCase()
{
    int n;
    cin >> n;
    int minn = 1e5, maxx = 0;
    bool dd[100001] = {0};
    for (int i = 1; i <= n; ++i)
    {
        int x;
        cin >> x;
        dd[x] = 1;
        minn = min(minn, x);
        maxx = max(maxx, x);
    }
    int d = 0;
    for (int i = minn; i <= maxx; ++i)
    {
        if (!dd[i])
            d++;
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