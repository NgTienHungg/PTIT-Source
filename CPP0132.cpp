// https://code.ptit.edu.vn/student/question/CPP0132
// ƯỚC SỐ NGUYÊN TỐ LỚN NHẤT

#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

bool isPrime(long long n)
{
    if (n < 2)
        return 0;
    for (int i = 2; i <= sqrt(n); ++i) {
        if (n % i == 0)
            return 0;
    }
    return 1;
}

void TestCase()
{
    long long n;
    cin >> n;
    long long r;
    for (int i = 1; i <= sqrt(n); ++i) {
        if (n % i == 0) {
            if (isPrime(n / i)) {
                cout << n / i << endl;
                return;
            }
            if (isPrime(i))
                r = i;
        }
    }
    cout << r << endl;
}

int main()
{
    int T;
    cin >> T;
    while (T--)
        TestCase();
    return 0;
}