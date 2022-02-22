// https://code.ptit.edu.vn/student/question/CPP0135
// LIỆT KÊ SỐ CÓ BA ƯỚC SỐ

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
    for (int i = 2; i <= sqrt(n); ++i)
    {
        if (isPrime(i))
            cout << i * i << " ";
    }
    cout << endl;
}

int main()
{
    int T;
    cin >> T;
    while (T--)
        TestCase();
    return 0;
}