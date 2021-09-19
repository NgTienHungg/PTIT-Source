// https://code.ptit.edu.vn/student/question/CPP0532
// DIỆN TÍCH ĐA GIÁC

#include <bits/stdc++.h>
using namespace std;

struct Data {
    double x, y;

    void input() {
        cin >> x >> y;
    }
};

double area(Data a, Data b) {
    return (a.x * b.y - a.y * b.x);
}

void TestCase() {
    int n;
    cin >> n;
    Data a[n + 1];
    for (int i = 0; i < n; ++i) {
        a[i].input();
    }
    a[n] = a[0];

    double res = 0;
    for (int i = 0; i < n; ++i) {
        res += area(a[i], a[i + 1]);
    }
    res = 0.5 * abs(res);
    cout << fixed << setprecision(3) << res << endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    int T;
    cin >> T;
    while (T--) {
        TestCase();
    }
    return 0;
}

/*
Công thức diện tích đa giác lồi:
Area(A) = 1/2 * |(x1.y2 - x2.y1) + (x2.y3 - x3.y2) + ... + (xn.y1 - x1.yn)|
*/