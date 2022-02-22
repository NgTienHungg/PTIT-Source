// https://code.ptit.edu.vn/student/question/CPP0421
// SẮP ĐẶT DÃY SỐ

#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

void TestCase()
{
    int n;
    cin >> n;
    vector<bool> v(n, 0);
    for (int i = 0; i < n; ++i) {
        long long x;
        cin >> x;
        if (x < 0 || x >= n)
            continue;
        v[x] = 1;
    }
    for (int i = 0; i < n; ++i) {
        if (v[i])
            cout << i << " ";
        else
            cout << "-1 ";
    }
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