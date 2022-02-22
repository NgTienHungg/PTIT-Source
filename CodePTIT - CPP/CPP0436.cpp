// https://code.ptit.edu.vn/student/question/CPP0436
// SỐ NHỎ NHẤT LỚN HƠN A[i]

#include <bits/stdc++.h>
using namespace std;

void TestCase()
{
    int n;
    cin >> n;
    int a[n], b[n];
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        b[i] = a[i];
    }
    sort(b, b + n);
    for (int i = 0; i < n; ++i) {
        int p = lower_bound(b, b + n, a[i] + 1) - b;
        if (p == n)
            cout << "_ ";
        else
            cout << b[p] << " ";
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
