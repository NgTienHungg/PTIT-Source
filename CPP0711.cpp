// https://code.ptit.edu.vn/student/question/CPP0711
// LIỆT KÊ XÂU NHỊ PHÂN

#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

void print(int a[], int n)
{
    for (int i = 0; i < n; ++i)
        cout << a[i];
    cout << " ";
}

void Try(int i, int a[], int n)
{
    for (int j = 0; j <= 1; ++j) {
        a[i] = j;
        if (i + 1 == n) print(a, n);
        else Try(i + 1, a, n);
    }
}

void TestCase()
{
    int n;
    cin >> n;
    int a[n];
    Try(0, a, n);
    cout << endl;
}

int main()
{
    int T;
    cin >> T;
    while (T--) TestCase();
    return 0;
}