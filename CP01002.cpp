// https://code.ptit.edu.vn/student/question/CP01002
// TỔNG GIAI THỪA

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    long long s = 1, res = 0;
    for (int i = 1; i <= n; ++i)
    {
        s *= i;
        res += s;
    }
    cout << res;
    return 0;
}