// https://code.ptit.edu.vn/student/question/CPP0107
// CHẤM ĐIỂM TRẮC NGHIỆM

#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

string fi = "ABBADCCABDCCABD";
string se = "ACCABCDDBBCDDBB";

void TestCase()
{
    int n;
    cin >> n;
    double r = 0;
    if (n == 101) {
        for (int i = 0; i < 15; ++i) {
            char c;
            cin >> c;
            if (c == fi[i])
                r += 2.0 / 3;
        }
    }
    else if (n == 102) {
        for (int i = 0; i < 15; ++i) {
            char c;
            cin >> c;
            if (c == se[i])
                r += 2.0 / 3;
        }
    }
    cout << setprecision(2) << fixed << r << endl;
}

int main()
{
    int T;
    cin >> T;
    while (T--)
        TestCase();
    return 0;
}