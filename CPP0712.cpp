// https://code.ptit.edu.vn/student/question/CPP0712
// LIỆT KÊ TỔ HỢP

#include <bits/stdc++.h>
using namespace std;

void print(int a[], int k)
{
    for (int i = 1; i <= k; ++i) {
        cout << a[i];
    }
    cout << " ";
}

void Try(int i, int a[], int n, int k)
{
    for (int j = a[i - 1] + 1; j <= n - k + i; j++)
    {
        a[i] = j;
        if (i == k)
            print(a, k);
        else
            Try(i + 1, a, n, k);
    }
}

void TestCase()
{
    int n, k;
    cin >> n >> k;
    int a[k + 1] = {0};
    Try(1, a, n, k);
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