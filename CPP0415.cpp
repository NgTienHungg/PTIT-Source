// https://code.ptit.edu.vn/student/question/CPP0415
// TÍNH TÍCH

#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

void TestCase()
{
    int n, m;
    cin >> n >> m;
    int a[n], b[m];
    for (auto &x : a)
        cin >> x;
    for (auto &x : b)
        cin >> x;
    int maxx = *max_element(a, a + n);
    int minn = *min_element(b, b + m);
    long long r = (long long)minn * maxx;
    cout << r << endl;
}

int main()
{
    int T;
    cin >> T;
    while (T--)
        TestCase();
    return 0;
}