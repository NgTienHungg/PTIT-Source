// https://code.ptit.edu.vn/student/question/CPP0220
// BIÊN CỦA MA TRẬN

#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

void TestCase()
{
    int n;
    cin >> n;
    int a[n][n];
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> a[i][j];
        }
    }
    
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (i == 0 || i == n - 1) cout << a[i][j];
            else if (j == 0 || j == n - 1) cout << a[i][j];
            else cout << " ";
            cout << " ";
        }
        cout << endl;
    }
}

int main()
{
    int T;
    cin >> T;
    while (T--)
        TestCase();
    return 0;
}