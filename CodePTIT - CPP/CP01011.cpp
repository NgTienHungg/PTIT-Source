// https://code.ptit.edu.vn/student/question/CP01011
// CHÊNH LỆCH NHỎ NHẤT

#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

void TestCase()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; ++i)
        cin >> a[i];

    sort(a, a + n);
    int minn = INT_MAX;
    for (int i = 1; i < n; ++i)
        minn = min(minn, a[i] - a[i - 1]);

    cout << minn << endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int T;
    cin >> T;
    while (T--)
        TestCase();
    return 0;
}