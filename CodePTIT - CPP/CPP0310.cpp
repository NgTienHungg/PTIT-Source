// https://code.ptit.edu.vn/student/question/CPP0310
// TỔNG LỚN NHẤT VÀ NHỎ NHẤT

#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

long long Min(string a, string b)
{
    for (int i = 0; i < a.length(); ++i) {
        if (a[i] == '6')
            a[i] = '5';
    }
    for (int i = 0; i < b.length(); ++i) {
        if (b[i] == '6')
            b[i] = '5';
    }
    long long x = stoll(a), y = stoll(b);
    return x + y;
}

long long Max(string a, string b)
{
    for (int i = 0; i < a.length(); ++i) {
        if (a[i] == '5')
            a[i] = '6';
    }
    for (int i = 0; i < b.length(); ++i) {
        if (b[i] == '5')
            b[i] = '6';
    }
    long long x = stoll(a), y = stoll(b);
    return x + y;
}

void TestCase()
{
    string a, b;
    cin >> a >> b;
    cout << Min(a, b) << " " << Max(a, b) << endl;
}

int main()
{
    int T;
    cin >> T;
    while (T--)
        TestCase();
    return 0;
}