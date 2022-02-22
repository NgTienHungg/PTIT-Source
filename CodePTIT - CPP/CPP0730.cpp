// https://code.ptit.edu.vn/student/question/CPP0730
// TỔNG LỚN NHẤT CỦA DÃY CON LIÊN TỤC

#include <bits/stdc++.h>
using namespace std;

void TestCase()
{
    int n;
    cin >> n;
    int isNegative = 1;
    int a[n];
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        if (a[i] > 0)
            isNegative = 0;
    }

    if (isNegative) {
        cout << *max_element(a, a + n) << endl;
        return;
    }

    long long sum = 0 , res = a[0];
    for (int i = 0; i < n; ++i) {
        if (sum + a[i] < 0)
            sum = 0;
        else {
            sum += a[i];
            res = max(res, sum);
        }
    }
    cout << res << endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    int T;
    cin >> T;
    while (T--) {
        TestCase();
    }
    return 0;
}