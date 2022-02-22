// https://code.ptit.edu.vn/student/question/CPP0412
// SẮP XẾP 0 -1 - 2

#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

void TestCase()
{
    int n;
    cin >> n;
    int a[n];
    for (auto &x : a)
        cin >> x;
    sort(a, a + n);
    for (auto x : a)
        cout << x << " ";
    cout << endl;
}

int main()
{
    int T;
    cin >> T;
    while (T--)
        TestCase();
    return 0;
}