// https://code.ptit.edu.vn/student/question/CPP0129
// ƯỚC SỐ CỦA GIAI THỪA

#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

void TestCase()
{
    int n, p;
    cin >> n >> p;
    int x = 0;
    for (int i = 1; i <= n; ++i)
    {
        if (i % p == 0)
        {
            int t = i;
            while (t % p == 0)
            {
                x++;
                t /= p;
            }
        }
    }
    cout << x << endl;
}

int main()
{
    int T;
    cin >> T;
    while (T--)
        TestCase();
    return 0;
}