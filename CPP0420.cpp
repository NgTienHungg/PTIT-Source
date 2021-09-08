// https://code.ptit.edu.vn/student/question/CPP0420
// SẮP XẾP THEO KHOẢNG CÁCH

#include <bits/stdc++.h>
using namespace std;

int n, k;

struct Data
{
    int id;
    int val;
};

bool cmp(Data a, Data b)
{
    if (abs(a.val - k) < abs(b.val - k)) return 1;
    if (abs(a.val - k) == abs(b.val - k) && a.id < b.id) return 1;
    return 0;
}

void TestCase()
{
    cin >> n >> k;
    Data a[n];
    for (int i = 0; i < n; ++i) {
        cin >> a[i].val;
        a[i].id = i;
    }
    sort(a, a + n, cmp);
    for (auto x : a) {
        cout << x.val << " ";
    }
    cout << endl;
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