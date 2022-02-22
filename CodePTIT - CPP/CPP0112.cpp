// https://code.ptit.edu.vn/student/question/CPP0112
// KHOẢNG CÁCH

#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

void TestCase()
{
    double a, b, c, d;
    cin >> a >> b >> c >> d;
    double r = sqrt((a - c) * (a - c) + (b - d) * (b - d));
    cout << setprecision(4) << fixed << r << endl;
}

int main()
{
    int T;
    cin >> T;
    while (T--)
        TestCase();
    return 0;
}