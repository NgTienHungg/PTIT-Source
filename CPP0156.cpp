// https://code.ptit.edu.vn/student/question/CPP0156
// ĐẾM SỐ NGHIỆM CỦA PHƯƠNG TRÌNH ĐỒNG DƯ

#include <bits/stdc++.h>
using namespace std;

void Faster() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

void TestCase() {
    /*
    T/c đồng dư: x % p = 1 thì x^2 % p = 1
    Nhận thấy: x % p == 1 thì (x + p*i) % p == 1
    Với mỗi x t/m, ta tìm last là số lớn nhất có dạng (x + p*i) còn t.m last % p == 1
    Như vậy sẽ tính được số lượng số t/m trong đoạn [x, last]
    */
    long long b, p;
    cin >> b >> p;
    long long res = 0;
    for (long long i = 1; i < p; ++i) {
        if ((i * i) % p == 1) {
            long long last = i + p * (b / p);
            if (last > b)
                last -= p;
            res += (last - i) / p + 1;
        }
    }
    cout << res << endl;
}

int main() {
    Faster();
    int T;
    cin >> T;
    while (T--) {
        TestCase();
    }
    return 0;
}