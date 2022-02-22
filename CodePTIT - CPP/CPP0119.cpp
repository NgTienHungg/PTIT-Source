// https://code.ptit.edu.vn/student/question/CPP0119
// ƯỚC SỐ CHIA HẾT CHO 2

#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

void TestCase()
{
    int n;
    cin >> n;
    int d = 0;
    for (int i = 1; i <= sqrt(n); ++i)
    {
        if (n % i == 0)
        {
            if (i % 2 == 0)
                d++;
            if ((n / i) % 2 == 0 && i * i != n)
                d++;
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