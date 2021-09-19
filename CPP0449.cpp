// https://code.ptit.edu.vn/student/question/CPP0449
// KHOẢNG CÁCH BẰNG X

#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

bool bs(int a[], int l, int r, int x)
{
    while (l <= r) {
        int m = (l + r) / 2;
        if (a[m] == x) return 1;
        else if (a[m] > x) r = m - 1;
        else l = m + 1;
    }
    return 0;
}

void TestCase()
{
    int n, x;
    cin >> n >> x;
    int a[n];
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    sort(a, a + n);
    for (int i = 0; i < n; ++i) {
        if (a[i] + x > a[n - 1])
            break;
        // x có thể âm nên bs từ 0
        if (bs(a, 0, n - 1, a[i] + x)) {
            cout << "1\n";
            return;
        }
    }
    cout << "-1\n";
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int T;
    cin >> T;
    while (T--) {
        TestCase();
    }
    return 0;
}