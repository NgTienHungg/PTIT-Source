// https://code.ptit.edu.vn/student/question/CPP0338
// ĐẾM XÂU CON

#include <bits/stdc++.h>
using namespace std;

void TestCase()
{
    string s;
    int k;
    cin >> s >> k;
    int res = 0;
    for (int i = 0; i < s.length(); ++i) {
        bool dd[26] = {0};
        int d = 0;
        for (int j = i; j < s.length(); ++j) {
            if (dd[s[j] - 'a'] == 0) {
                dd[s[j] - 'a'] = 1;
                d++;
            }
            if (d == k)
                res++;
            else if (d > k)
                break;
        }
    }
    cout << res << endl;
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