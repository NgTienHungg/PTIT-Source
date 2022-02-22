// https://code.ptit.edu.vn/student/question/CPP0116
// ƯỚC SỐ NGUYÊN TỐ NHỎ NHẤT

#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

vector<int> v(1e4 + 1, 0);
void eratosthenes()
{
    v[1] = 1;
    for (int i = 2; i <= 100; ++i) {
        if (!v[i]) {
            for (int j = i; j <= 1e4; j += i) {
                if (!v[j])
                    v[j] = i;
            }
        }
    }
    for (int i = 2; i <= 1e4; ++i) {
        if (!v[i])
            v[i] = i;
    }
}

void TestCase()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; ++i)
        cout << v[i] << " ";
    cout << endl;
}

int main()
{
    eratosthenes();
    int T;
    cin >> T;
    while (T--)
        TestCase();
    return 0;
}