// https://code.ptit.edu.vn/student/question/CPP0444
// TÌM KIẾM TRONG DÃY SẮP XẾP VÒNG

#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

void TestCase()
{
    int n, x;
    cin >> n >> x;
    int p;
    for (int i = 1; i <= n; ++i) {
        int so;
        cin >> so;
        if (so == x) p = i;
    }
    cout << p << endl;
}

int main()
{
    int T;
    cin >> T;
    while (T--) TestCase();
    return 0;
}