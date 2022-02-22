// https://code.ptit.edu.vn/student/question/CPP0739
// GIẢI MÃ TĂNG GIẢM

#include <bits/stdc++.h>
using namespace std;

void TestCase()
{
    string s;
    cin >> s;
    vector<int> v;
    int minn = 1, posI = 0;

    // Xét s[0]
    if (s[0] == 'I') {
        v.push_back(1);
        v.push_back(2);
        posI = 1;
    }
    else {
        v.push_back(2);
        v.push_back(1);
        posI = 0;
    }
    minn = 3;

    for (int i = 1; i < s.length(); ++i) {
        if (s[i] == 'I') {
            v.push_back(minn);
            posI = i + 1;
        }
        else {
            v.push_back(v[i]);
            for (int j = posI; j <= i; ++j) {
                v[j]++;
            }
        }
        minn++;
    }
    for (auto x : v) cout << x;
    cout << endl;
}

int main()
{
    int T;
    cin >> T;
    while (T--) {
        TestCase();
    }
    return 0;
}