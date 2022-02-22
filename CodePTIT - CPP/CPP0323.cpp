// https://code.ptit.edu.vn/student/question/CPP0323
// PHÉP CHIA DƯ CỦA SỐ NGUYÊN LỚN

#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

void TestCase()
{
    string n;
    long long m;
    cin >> n >> m;
    long long k = 0;
    for (auto x : n) {
        k = k * 10 + (x - '0');
        k %= m;
    }
    cout << k << endl;
}

int main()
{
    int T;
    cin >> T;
    while (T--) TestCase();
    return 0;
}