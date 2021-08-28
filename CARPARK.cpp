// https://code.itptit.com/problems/100058
// Đỗ xe tối ưu

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
    int sum = a[n - 1] - a[0];
    for (int i = 1; i < n; ++i)
        sum += a[i] - a[i - 1];
    cout << sum << endl;
}

int main()
{
    int T;
    cin >> T;
    while (T--)
        TestCase();
    return 0;
}