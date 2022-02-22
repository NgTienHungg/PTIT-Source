// https://code.ptit.edu.vn/student/question/CPP0216
// DÃY MOUNTAIN

#include <bits/stdc++.h>
using namespace std;

void TestCase()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    int l, r;
    cin >> l >> r;
    while (l <= r && a[l] <= a[l + 1])
        l++;
    l++;
    while (l <= r && a[l] <= a[l - 1])
        l++;
    (l > r) ? cout << "Yes\n" : cout << "No\n";
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