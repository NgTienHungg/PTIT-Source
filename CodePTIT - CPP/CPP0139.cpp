// https://code.ptit.edu.vn/student/question/CPP0139
// SỐ SMITH

#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

bool isPrime(int n) {
    if (n < 2)
        return 0;
    for (int i = 2; i <= sqrt(n); ++i) {
        if (n % i == 0)
            return 0;
    }
    return 1;
}

int Sum(int n) {
    int s = 0;
    while (n > 0) {
        s += n % 10;
        n /= 10;
    }
    return s;
}

void TestCase() {
    int n;
    cin >> n;
    if (isPrime(n)) {
        cout << "NO\n";
        return;
    }
    int s1 = Sum(n);
    int s2 = 0;
    for (int i = 2; i <= sqrt(n); ++i) {
        while (n % i == 0) {
            s2 += Sum(i);
            n /= i;
        }
        if (n == 1)
            break;
    }
    if (n > 1)
        s2 += Sum(n);
    s1 == s2 ? cout << "YES\n" : cout << "NO\n";
}

int main() {
    int T;
    cin >> T;
    while (T--)
        TestCase();
    return 0;
}