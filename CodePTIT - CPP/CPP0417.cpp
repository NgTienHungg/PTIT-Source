// https://code.ptit.edu.vn/student/question/CPP0417
// SẮP XẾP LẠI DÃY CON

#include <bits/stdc++.h>
using namespace std;

void TestCase()
{
    int n;
    cin >> n;
    int a[n], b[n];
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        b[i] = a[i];
    }
    sort(b, b + n);
    int i = 0, j = n - 1;
    while (a[i] == b[i]) i++;
    while (a[j] == b[j]) j--;
    cout << i + 1 << " " << j + 1 << endl;
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