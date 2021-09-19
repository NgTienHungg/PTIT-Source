// https://code.ptit.edu.vn/student/question/CPP0425
// SẮP XẾP CHẴN LẺ

#include <bits/stdc++.h>
using namespace std;

void TestCase()
{
    int n;
    cin >> n;
    int a[n];
    for (auto &x : a) {
        cin >> x;
    }
    sort(a, a + n);
    int b[n], index = 0;
    for (int i = 0; i < n; i += 2) {
        b[i] = a[index++];
    }
    for (int i = 1; i < n; i += 2) {
        b[i] = a[index++];
    }
    for (auto x : b) {
        cout << x << " ";
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