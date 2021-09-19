// https://code.ptit.edu.vn/student/question/CPP0217
// PHẦN TỬ NHỎ NHẤT THỨ K CỦA MA TRẬN

#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

void TestCase()
{
    int n, k;
    cin >> n >> k;
    int a[n * n];
    for (auto &x : a)
        cin >> x;
    sort(a, a + n * n);
    cout << a[k - 1] << endl;
}

int main()
{
    int T;
    cin >> T;
    while (T--)
        TestCase();
    return 0;
}