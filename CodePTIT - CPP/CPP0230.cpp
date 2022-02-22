// https://code.ptit.edu.vn/student/question/CPP0230
// MA TRẬN NHỊ PHÂN

#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    int n;
    cin >> n;
    int d = 0;
    for (int i = 1; i <= n; ++i) {
        int on = 0, ze = 0;
        for (int j = 1; j <= 3; ++j) {
            int x;
            cin >> x;
            x == 1 ? on++ : ze++;
        }
        if (on >= 2) d++;
    }
    cout << d;
    return 0;
}