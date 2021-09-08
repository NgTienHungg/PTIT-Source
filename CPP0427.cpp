// https://code.ptit.edu.vn/student/question/CPP0427
// NHÂN ĐÔI CẶP SỐ BẰNG NHAU

#include <bits/stdc++.h>
using namespace std;

void TestCase()
{
    int n;
    cin >> n;
    vector<int> a(n);;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    for (int i = 0; i + 1 < n; ++i) {
        if (a[i] == 0)
            continue;
        if (a[i] == a[i + 1]) {
            a[i] *= 2;
            a[i + 1] = 0;
        }
    }
    int d = 0;
    for (auto x : a) {
        if (x != 0) {
            cout << x << " ";
            d++;
        }
    }
    while (d < n) {
        cout << "0 ";
        d++;
    }
    cout << endl;
}

int main()
{
    int T;
    cin >> T;
    while (T--) {
        TestCase();
    }
    return 0;
}