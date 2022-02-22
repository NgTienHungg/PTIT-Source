// https://code.ptit.edu.vn/student/question/CPP0262
// TẬP HỢP NGUYÊN TỐ CÙNG NHAU

#include <bits/stdc++.h>
using namespace std;

void TestCase() {
    long long n, m;
    cin >> n >> m;

    long long sum = n * (n + 1) / 2;
    long long a = (sum + m) / 2;
    long long b = sum - a;

    if (a - b == m && __gcd(a, b) == 1) cout << "Yes";
    else cout << "No";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int T = 1; cin >> T;
    while (T--) {
        TestCase();
        cout << "\n";
    }
    return 0;
}