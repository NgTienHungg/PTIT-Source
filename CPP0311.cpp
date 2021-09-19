// https://code.ptit.edu.vn/student/question/CPP0311
// SẮP ĐẶT XÂU KÝ TỰ - 1

#include <bits/stdc++.h>
using namespace std;

void TestCase()
{
    string s;
    cin >> s;
    int dd[26] = {0};
    for (int i = 0; i < s.length(); ++i)
        dd[s[i] - 'a']++;
    
    int d = 0;
    for (auto x : dd)
        d = max(d, x);
    
    if (d <= (s.length() + 1) / 2) cout << "1\n";
    else cout << "0\n";
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