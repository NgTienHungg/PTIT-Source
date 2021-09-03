// https://code.ptit.edu.vn/student/question/CPP0448
// ĐẾM SỐ LẦN XUẤT HIỆN

#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

void TestCase()
{
    int n, x;
    cin >> n >> x;
    int d = 0;
    for (int i = 1; i <= n; ++i)
    {
        int num;
        cin >> num;
        if (num == x)
            d++;
    }
    d != 0 ? cout << d << endl : cout << "-1\n";
}

int main()
{
    int T;
    cin >> T;
    while (T--)
        TestCase();
    return 0;
}