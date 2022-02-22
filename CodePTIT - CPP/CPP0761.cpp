// https://code.ptit.edu.vn/student/question/CPP0761
// ƯỚC SỐ CHUNG LỚN NHẤT CỦA SỐ NGUYÊN LỚN

#include <bits/stdc++.h>
using namespace std;

void TestCase() {
    long long a, num = 0;
    string b;
    cin >> a >> b;
    
    for (char x : b) {
        num = (num * 10 + x - '0') % a;
    }
    cout << __gcd(a, num);
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