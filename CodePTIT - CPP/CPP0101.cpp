// https://code.ptit.edu.vn/student/question/CPP0101
// TÍNH TỔNG 1 ĐẾN N

#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

void TestCase()
{
    int n;
    cin >> n;
    long long r = (long long)n * (n + 1) / 2;
    cout << r << endl;
}

int main()
{
    int T;
    cin >> T;
    while (T--)
        TestCase();
    return 0;
}