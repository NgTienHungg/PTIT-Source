// https://code.ptit.edu.vn/student/question/CPP0213
// KIỂM TRA DÃY FIBONACCI

#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

vector<bool> v(1001, 0);
void fibo()
{
    v[0] = v[1] = 1;
    int f1 = 0, f2 = 1;
    for (int i = 2; f1 + f2 <= 1000; ++i)
    {
        int f = f1 + f2;
        v[f] = 1;
        f1 = f2;
        f2 = f;
    }
}

void TestCase()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; ++i)
    {
        int x;
        cin >> x;
        if (v[x])
            cout << x << " ";
    }
    cout << endl;
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