// https://code.ptit.edu.vn/student/question/CPP0713
// LIỆT KÊ HOÁN VỊ

#include <bits/stdc++.h>
using namespace std;

int a[21], visited[21];

void init(int n) {
    for (int i = 1; i <= n; ++i) {
        a[i] = i;
    }
    memset(visited, 0, sizeof(visited));
}

void print(int n)
{
    for (int i = 1; i <= n; ++i) {
        cout << a[i];
    }
    cout << " ";
}

void Try(int i, int n)
{
    for (int j = 1; j <= n; ++j) {
        if (!visited[j]) {
            a[i] = j;
            visited[j] = 1;
            if (i == n)
                print(n);
            else
                Try(i + 1, n);
            visited[j] = 0;
        }
    }
}

void TestCase()
{
    int n;
    cin >> n;
    init(n);
    Try(1, n);
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