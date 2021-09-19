// https://code.ptit.edu.vn/student/question/CPP0450
// PHẦN TỬ ĐẦU TIÊN LẶP LẠI

#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

void TestCase()
{
    int n;
    cin >> n;
    map<int, int> ma;
    int res = -1, stop = 0;
    for (int i = 1; i <= n; ++i) {
        int x;
        cin >> x;
        ma[x]++;
        if (ma[x] == 2 && !stop) {
            res = x;
            stop = 1;
        }
    }
    cout << res << endl;
}

int main()
{
    int T;
    cin >> T;
    while (T--) TestCase();
    return 0;
}