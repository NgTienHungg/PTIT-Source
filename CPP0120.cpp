// https://code.ptit.edu.vn/student/question/CPP0120
// CHIA HẾT CHO A VÀ B

#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

void TestCase()
{
    int m, n, a, b;
    cin >> m >> n >> a >> b;
    int d = 0;
    for (int i = m; i <= n; ++i)
    {
        if (i % a == 0 || i % b == 0)
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