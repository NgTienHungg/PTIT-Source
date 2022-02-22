// https://luyencode.net/problem/AEDOI
// AEDOI - Hai anh em

#include <bits/stdc++.h>
using namespace std;

bool isOK(int a, int b) {
    int s = 1;
    for (int i = 2; i <= sqrt(a); ++i) {
        if (a % i == 0) {
            s += i + a / i;
            if (i * i == a)
                s -= i;
        }
    }
    return (s == b);
}

int main() {
    int a, b;
    cin >> a >> b;
    if (isOK(a, b) && isOK(b, a)) cout << "YES";
    else cout << "NO";
    return 0;
}