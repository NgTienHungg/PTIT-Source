// https://code.ptit.edu.vn/student/question/CPP0136
// ĐẾM SỐ CÓ BA ƯỚC SỐ

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
    long long n;
    cin >> n;
    int d = 0;
    for (int i = 2; i <= sqrt(n); ++i)
    {
        if (isPrime(i))
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