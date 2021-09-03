// https://code.ptit.edu.vn/student/question/CPP0143
// SỐ FIBONACCI THỨ N

#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

vector<long long> f;
void fibo()
{
    f.assign({0, 1, 1});
    for (int i = 3; i <= 92; ++i)
        f.push_back(f[i - 1] + f[i - 2]);
}

void TestCase()
{
    int n;
    cin >> n;
    cout << f[n] << endl;
}

int main()
{
    fibo();
    int T;
    cin >> T;
    while (T--)
        TestCase();
    return 0;
}