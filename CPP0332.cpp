// https://code.ptit.edu.vn/student/question/CPP0332
// ĐỊA CHỈ EMAIL - 1

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    vector<string> v;
    while (cin >> s)
    {
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        v.push_back(s);
    }
    string r = v.back();
    for (int i = 0; i < v.size() - 1; ++i)
        r += v[i][0];
    r += "@ptit.edu.vn";
    cout << r;
    return 0;
}