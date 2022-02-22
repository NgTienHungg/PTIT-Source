// https://code.ptit.edu.vn/student/question/CPP0127
// CẶP SỐ NGUYÊN TỐ ĐẦU TIÊN CÓ TỔNG BẰNG N

#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

bool isPrime(int n)
{
    if (n < 2)
        return 0;
    for (int i = 2; i <= sqrt(n); ++i)
    {
        if (n % i == 0)
            return 0;
    }
    return 1;
}

void TestCase()
{
    int n;
    cin >> n;
    for (int i = 2; i <= n / 2; ++i)
    {
        if (isPrime(i) && isPrime(n - i))
        {
            cout << i << " " << n - i << endl;
            return;
        }
    }
    cout << "-1\n";
}

int main()
{
    int T;
    cin >> T;
    while (T--)
        TestCase();
    return 0;
}